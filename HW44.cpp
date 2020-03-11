#include<stdio.h>
int main() {
	int i, j, k;
	printf("<2중 for문을 이용한 출력>\n");
	for (i = 1; i < 10; i++) {
		for (j = 2; j < 6; j++)
			printf("%d*%d= %2d\t\t\t", j, i, j*i);
		printf("\n");
	}
	printf("\n");
	for (i = 1; i < 10; i++) {
		for (j = 6; j < 10; j++)
			printf("%d*%d= %2d\t\t\t", j, i, j*i);
		printf("\n");
	}
	printf("--------------------------------------------------------------------------------------\n\n");
	printf("<3중 for문을 이용한 출력>\n");
	for (i = 0; i < 2; i++) {
		for (j = 1; j < 10; j++) {
			for (k = 4*i+2; k <= 4*i+5; k++) {
				printf("%d*%d= %2d\t\t\t", k, j, k*j);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}