#include<stdio.h>
int input();
int main() {
	int star, i = 1;
	star = input();
	while (i <= star){
		printf("*");
		if ((i % 5) == 0)
			printf("\n");
		i++;
	}
	printf("\n");
	return 0;
}
int input() {
	int num;
	printf("#  �������� �Է��ϼ��� : ");
	if ((scanf("%d", &num) == 0))
		int input();
	else
		return num;
}