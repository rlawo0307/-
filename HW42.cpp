#include<stdio.h>
int main() {
	int i, j, line;
	printf("# 출력 라인수를 입력하시오 : ");
	while (scanf("%d", &line) == 1) {
		for (i = 1; i <= line; i++) {
			for (j = 0; j < i; j++)
				printf("*");
			for (j = 0; j < ((line * 2 + 2) - i * 2); j++)
				printf(" ");
			for (j = 0; j < i; j++)
				printf("*");
			printf("\n");
		}
		printf("# 출력 라인수를 입력하시오 : ");
	}
	return 0;
}