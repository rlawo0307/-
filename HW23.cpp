#include<stdio.h>
int main() {
	int num1, num2;
	while (1) {
		printf("# 두개의 정수를 입력하세요 : ");
		if (scanf("%d%d", &num1, &num2) == 2) {
			if (num1 >= num2)
				printf("%d - %d = %d\n", num1, num2, num1 - num2);
			else
				printf("%d - %d = %d\n", num2, num1, num2 - num1);
		}
		else break;
	}
	return 0;
}