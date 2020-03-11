#include<stdio.h>
int main() {
	int i, num;
	double sum = 0;
	double fib[10000];
	printf("피보나치 수열의 항수를 입력하시오 : ");
	scanf("%d", &num);
	fib[0] = fib[1] = 1;
	for (i = 0; i < (num - 2); i++) {
		fib[i + 2] = fib[i] + fib[i + 1];
	}
	for (i = 0; i < num; i++) {
		printf("%.0lf + ", fib[i]);
		sum += fib[i];
	}
	printf("\b\b= %.0lf\n", sum);
	return 0;
}