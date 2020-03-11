#include<stdio.h>
int input();
int primeNumber(int);
int main() {
	int num, i, res, pri[100000], n=0;
	num = input();
	printf("1~%d까지의 소수 값은 다음과 같습니다.\n", num);
	for (i = 2; i <= num; i++) {
		res = primeNumber(i);
		if (res == 1) {
			printf("%d\t", i);
			n++;
		}
	}
	printf("\n1~%d까지의 총 소수는 %d개 입니다.\n", num, n);
	return 0;
}
int input() {
	int num;
	printf("*정수값 하나를 입력하시오 : ");
	scanf("%d", &num);
	return num;
}
int primeNumber(int check_num) {
	for (int i = 2; i < check_num; i++)
		if (check_num % i == 0)
			return 0;
	return 1;
}