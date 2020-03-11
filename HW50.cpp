#include<stdio.h>
void myfflush();
double input(int);
double Max(double*);
double Min(double*);
void output(double, double);
int main() {
	double num[6], max, min;
	for (int i = 0; i < 5; i++)
		num[i] = input(i);
	max = Max(num);
	min = Min(num);
	output(max, min);
	return 0;
}
void myfflush() {
	while (getchar() != '\n')
		;
}
double input(int i) {
	double input;
	printf("%d 번 방 값 : ", i);
	while (scanf("%lf", &input) != 1) {
		myfflush();
		scanf("%lf", &input);
	}
	return input;
}
double Max(double* num) {
	double tmp;
	for (int i = 1; i <= 4; i++)
		if (num[i] > num[0]) {
			tmp = num[i];
			num[i] = num[0];
			num[0] = tmp;
		}
	return num[0];
}
double Min(double* num) {
	double tmp;
	for(int i=1; i<=4; i++)
		if (num[i] < num[0]) {
			tmp = num[i];
			num[i] = num[0];
			num[0] = tmp;
		}
	return num[0];
}
void output(double max, double min) {
	printf("가장 큰 값 : %.2lf\n가장 작은 값 : %.2lf\n", max, min);
}