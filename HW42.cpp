#include<stdio.h>
int main() {
	int i, j, line;
	printf("# ��� ���μ��� �Է��Ͻÿ� : ");
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
		printf("# ��� ���μ��� �Է��Ͻÿ� : ");
	}
	return 0;
}