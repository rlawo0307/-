#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void init(int(*)[4]);
int random(int);
void sumPrint(int(*)[4]);
int main() {
	int num[3][4];
	srand((unsigned int)time(NULL)); 
	init(num);
	sumPrint(num);
	return 0;
}
void init(int (*num)[4]) {
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++) {
			num[i][j] = random(10);
			while (num[i][j] == 0)
				num[i][j] = random(10);
		}
}
int random(int n) {
	int res;
	res = rand() % n;
	return res;
}
void sumPrint(int(*num)[4]) {
	int rowsum = 0, linesum = 0;
	for (int i = 0; i < 3; i++) {
		printf("%d행     : ", i);
		for (int j = 0; j < 4; j++) {
			printf("% d\t", num[i][j]);
			linesum += num[i][j];
		}
		printf("%d 행의 합 : %d\n", i, linesum);
		linesum = 0;
	}
	printf("열의 합 : ");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++)
			rowsum += num[j][i];
		printf("%d\t", rowsum);
		rowsum = 0;
	}
}
