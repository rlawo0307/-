#include<stdio.h>
#include<string.h>
FILE * fileOpen(char*, char*);
int load(FILE*, int*);
int Max(int*, int);
void print(int*, int, int);

int main() {
	int testCnt, dataCnt, dataArray[100], max;
	FILE*fp;
	fp = fileOpen("c:\\data\\HW63_histogram.txt", "rt");
	if (fp == NULL)
		return 1;
	fscanf(fp, "%d", &testCnt);
	for (int i = 0; i < testCnt; i++) {
		dataCnt = load(fp, dataArray);
		max = Max(dataArray, dataCnt);
		print(dataArray, dataCnt, max);
		printf("\n\n---------------------------------------------------------\n\n\n");
	}
	return 0;
}
FILE * fileOpen(char*filename, char*mode) {
	FILE*fp;
	if ((fp = fopen(filename, mode)) == NULL)
		printf("File open error!\n");
	return fp;
}
int load(FILE*fp, int*dataArray) {
	int dataCnt = 0;
	while (1) {
		fscanf(fp, "%d", &dataArray[dataCnt]);
		if (dataArray[dataCnt] == 0)
			break;
		dataCnt++;
	}
	return dataCnt;
}
int Max(int* dataArray, int dataCnt) {
	int tmp = 0;
	for (int i = 0; i < dataCnt; i++)
		if (tmp < dataArray[i])
			tmp = dataArray[i];
	return tmp;
}
void print(int * dataArray, int dataCnt, int max) {
	int print[9][100] = { '\0' }, a;
	for (int i = 0; i < dataCnt; i++) {
		a = max - dataArray[i];
		for (int j = 0; j < a; j++)
			print[j][i] = ' ';
		for (int j = a; j < max; j++)
			print[j][i] = '*';
	}
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 100; j++)
			if (print[i][j] == '\0')
				break;
		else
			printf("%2c", print[i][j]);
		printf("\n");
		if (print[i+1][0] == '\0')
			break;
	}
	for (int i = 0; i < dataCnt; i++)
		printf("%2d", dataArray[i]);
}