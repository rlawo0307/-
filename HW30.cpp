#include<stdio.h>
int main() {
	int num, res;
	unsigned int check = 0x80000000;
	printf("* 10진수 정수를 입력하시오 : ");
	scanf("%d", &num);
	printf("%d(10) = ", num);
	for (int i = 1; i <= 32; i++, check /= 2) {
		res = num & check;
		res = res >> (32 - i);
		if (res == 0)
			printf("0");
		else
			printf("1");
	}
	printf("(2)\n");
	return 0;
}