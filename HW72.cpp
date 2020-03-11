#include<stdio.h>
FILE* fileOpen(char* , char*);
void numRead(FILE*, int*);
void dataRead(FILE*, int*, int);
int scoreCheck(int*, int);
void output(int, int*, int);
int main() {
	int testCnt, num, data[100] = { '\0' }, score=0;
	FILE* fp;
	fp = fileOpen("c:\\data\\hw72_grading.txt", "rt");
	if (fp == NULL) return 1;
	fscanf(fp, "%d", &testCnt);
	for (int i = 0; i < testCnt; i++) {
		numRead(fp, &num);
		dataRead(fp, data, num);
		data[num] = 0;
		score = scoreCheck(data, num);
		output(num, data, score);
		printf("\n\n");
	}
	return 0;
}
FILE* fileOpen(char* filename, char* mode) {
	FILE* fp;
	if ((fp = fopen(filename, mode)) == NULL)
		printf("File open errer!\n");
	return fp;
}
void numRead(FILE* fp, int* num) {
	fscanf(fp, "%d", num);
}
void dataRead(FILE* fp, int* data, int num) {
	for (int i = 0; i < num; i++)
		fscanf(fp, "%d", &data[i]);
}
int scoreCheck(int* data, int num) {
	int k = 0, score, conti;
	while (k < num) {
		if (data[k] == 0)
			if (k == 0) { k++; conti = 0; score = 0;}
			else {
				if (data[k - 1] == 1) { conti = 0; k++; }
				else if (data[k - 1] == 0) { k++; }
			}
		else if (data[k] == 1)
			if (k == 0) { conti = 1; score = conti; k++; }
			else
				if (data[k - 1] == 1) { conti++; score += conti; k++; }
				else if (data[k - 1] == 0) { conti++; score += conti; k++; }
	}
	return score;
}
void output(int num, int* data, int score) {
	printf("문제 수 : %d문항\n", num);
	printf("채점 결과 : ");
	for (int i = 0; i < num; i++)
		printf("%2d", data[i]);
	printf("\n");
	printf("점수 : %d\n", score);
}