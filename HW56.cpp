#include<stdio.h>
FILE * fileOpen(char*, char*);
int input(FILE*, int*);
void copy(int* num, int*copynum, int);
void sort(int*, int*, int);
void output(int*, int*, int);
int main() {
	int testCnt, dataCnt, copynum[100] = { 0 }, num[100] = { 0 }, snum[100] = { 0 };
	FILE*fp;
	fp = fileOpen("c:\\data\\hw56_sortData.txt", "rt");
	if (fp == NULL)
		return 1;
	fscanf(fp, "%d", &testCnt);
	for (int i = 0; i < testCnt; i++) {
		dataCnt = input(fp, num);
		copy(num, copynum, dataCnt);
		sort(num, snum, dataCnt);
		output(copynum, snum, dataCnt);
		printf("\n");
	}
	return 0;
}
FILE * fileOpen(char*filename, char*mode) {
	FILE*fp;
	if ((fp = fopen(filename, mode)) == NULL)
		printf("File open error!\n");
	return fp;
}
int input(FILE *fp, int* num) {
	int dataCnt = 0;
	while (1) {
		fscanf(fp, "%d", &num[dataCnt]);
		if (num[dataCnt] == 0)
			break;
		dataCnt++;
	}
	return dataCnt;
}
void copy(int* num, int* copynum, int dataCnt) {
	for (int i = 0; i < dataCnt; i++)
		copynum[i] = num[i];
}
void sort(int* num, int* snum, int dataCnt) {
	int minIndex, tmp;
	for (int i = 0; i < dataCnt-1; i++) {
		minIndex = i;
		for (int j = i + 1; j < dataCnt; j++) {
			if (num[minIndex] > num[j])
				minIndex = j;
		}
		tmp = num[i];
		num[i] = num[minIndex];
		num[minIndex] = tmp;
	}
	for (int i = 0; i < dataCnt; i++)
		snum[i] = num[i];
}
void output(int* copynum, int* snum, int dataCnt) {
	printf("# 소트 전 데이터 : ");
	for (int i = 0; i < dataCnt; i++)
		printf("%3d", copynum[i]);
	printf("\n");
	printf("# 소트 후 데이터 : ");
	for (int i = 0; i < dataCnt; i++)
		printf("%3d", snum[i]);
	printf("\n");
}