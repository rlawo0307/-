#include<stdio.h>
FILE* fileOpen(char*, char*);
void dataRead(FILE*, int*);
void check(int*, int*);
void output(int*, int*);
int main() {
	int testCnt, data[10], num[10] = { '\0' };
	FILE* fp;
	fp = fileOpen("c:\\data\\hw73_overlap.txt", "rt");
	if (fp == NULL) return 1;
	fscanf(fp, "%d", &testCnt);
	for (int i = 0; i < testCnt; i++) {
		dataRead(fp, data);
		check(data, num);
		output(data, num);
		printf("\n");
		for (int i = 0; i < 10; i++)
			num[i] = '\0';
	}
	return 0;
}
FILE* fileOpen(char* filename, char* mode) {
	FILE* fp;
	if ((fp = fopen(filename, mode)) == NULL)
		printf("File open errer!\n");
	return fp;
}
void dataRead(FILE* fp, int* data) {
	for (int i = 0; i < 10; i++)
		fscanf(fp, "%d", &data[i]);
}
void check(int* data, int* num) {
	int tmp[21][10] = { '\0' };
	for (int i = 0; i < 10; i++) {
		int j = 0;
		if (data[i] < 0) {
			while (tmp[data[i]+10][j] != '\0') j++;
			tmp[data[i]+10][j] = data[i];
		}
		else if (data[i] == 0) {
			while (tmp[data[i]+10][j] != '\0') j++;
			tmp[data[i]+10][j] = data[i];
		}
		else {
			while (tmp[data[i]+10][j] != '\0') j++;
			tmp[data[i]+10][j] = data[i];
		}
	}
	for (int i = 0, k = 0; i < 21; i++)
		if (tmp[i][0] != '\0' && tmp[i][1] == '\0') {
			num[k] = i - 10;
			k++;
		}
}
void output(int* data, int* num) {
	int i = 0, k=0, len = 0, tmp;
	while (num[i] != '\0') {
		len++;
		i++;
	}
	printf("검사한 숫자 : ");
	for (int i = 0; i < 10; i++)
		printf("%2d", data[i]);
	printf("\n");
	printf("한번만 사용된 숫자 : ");
	for (int i = 0; i < 10; i++) {
		if (num[i] != '\0')
			printf("%2d", num[i]);
		else break;
	}
	printf("\n");
}