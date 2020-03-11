#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int random(int);
void init(int(*)[5]);
void cal(int(*)[5], int*, int*, int*);
void output(int(*)[5], int, int, int);
int main() {
	int num[5][5], sum1 = 0, sum2 = 0, sum3 = 0;
	srand((unsigned int)time(NULL)); 
	init(num);
	cal(num, &sum1, &sum2, &sum3);
	output(num, sum1, sum2, sum3);
	return 0;
}
void init(int (*num)[5]) {
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++) {
			num[i][j] = random(21);
			while (num[i][j] == 0)
				num[i][j] = random(21);
		}
}
int random(int n) {
	int res;
	res = rand() % n;
	return res;
}
void cal(int(*num)[5], int* sum1, int* sum2, int* sum3) {
	for (int i = 0; i < 5; i++)
		*sum1 += num[i][i];
	for (int i = 0; i < 4; i++)
		for (int j = i+1; j < 5; j++)
			*sum2 += num[i][j];
	for (int i = 1; i < 5; i++)
		for (int j = 0; j < i; j++)
			*sum3 += num[i][j];
}
void output(int (*num)[5], int sum1, int sum2, int sum3) {
	for (int i = 0; i < 5; i++) {
		printf("%d¹ø Çà : ", i);
		for (int j = 0; j < 5; j++)
			printf("%2d  ", num[i][j]);
		printf("\n");
	}
	printf("\n\n");
	printf("sum1 = %d\n", sum1);
	printf("sum2 = %d\n", sum2);
	printf("sun3 = %d\n", sum3);
}