#include<stdio.h>
FILE * fileOpen(char*, char*);
int fileRead(FILE*, int*);
int main() {
	int testCnt, dataCnt, dataArray[100], check, num=0;
	FILE*fp;
	fp = fileOpen("c:\\data\\fileTest1.txt", "rt");
	if (fp == NULL)
		return 1;

	fscanf(fp, "%d", &testCnt);
	for (int i = 0; i < testCnt; i++) {
		dataCnt = fileRead(fp, dataArray);
		printf("# 수열 : ");
		for (int j = 0; j < dataCnt; j++)
			printf("%3d", dataArray[j]);
		printf("\n");

		for (int k = 0; k < dataCnt; k++) {
			check = 2 * dataArray[k];
			for (int l = 0; l < dataCnt; l++) {
				if (check == dataArray[l])
					num++;
			}
		}
		printf("2배 값이 존재하는 원소의 개수는 %d개 입니다.\n", num);
		num = 0;
	}
	fclose(fp);
	return 0;
}
FILE * fileOpen(char*filename, char*mode) {
	FILE*fp;
	if ((fp = fopen(filename, mode)) == NULL)
		printf("File open error!\n");
	return fp;
}
int fileRead(FILE*fp, int*dataArray) {
	int dataCnt = 0;
	while (1) {
		fscanf(fp, "%d", &dataArray[dataCnt]);	
		if (dataArray[dataCnt] == 0)
			break;
		dataCnt++;
	}
	return dataCnt;
}