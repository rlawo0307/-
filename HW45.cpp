#include<stdio.h>
int input();
int primeNumber(int);
int main() {
	int num, i, res, pri[100000], n=0;
	num = input();
	printf("1~%d������ �Ҽ� ���� ������ �����ϴ�.\n", num);
	for (i = 2; i <= num; i++) {
		res = primeNumber(i);
		if (res == 1) {
			printf("%d\t", i);
			n++;
		}
	}
	printf("\n1~%d������ �� �Ҽ��� %d�� �Դϴ�.\n", num, n);
	return 0;
}
int input() {
	int num;
	printf("*������ �ϳ��� �Է��Ͻÿ� : ");
	scanf("%d", &num);
	return num;
}
int primeNumber(int check_num) {
	for (int i = 2; i < check_num; i++)
		if (check_num % i == 0)
			return 0;
	return 1;
}