#include<stdio.h>
void myfflush();
void input(int*);
int eo_input(int, int);
int main() {
	int start = 1, end = 2, res, i, sum = 0;
	printf("# ���� ���� �Է��Ͻÿ� : ");
	input(&start);
	printf("# �� ���� �Է��Ͻÿ� : ");
	input(&end);
	while (start >= end) {
		printf("# �� ���� �Է��Ͻÿ� : ");
		input(&end);
	}
	res = eo_input(start, end);
	if (res == 1) {
		printf("  %d~%d ������ ¦��(", start, end);
		for (i = start; i <= end; i += 2) {
			if (start % 2 == 0)
				sum += i;
			else
				i -= 1;
			printf("%d ", i);
		}
	}
	else {
		printf("  %d~%d ������ Ȧ��(", start, end);
		for (i = start; i <= end; i += 2) {
			if (start % 2 == 0)
				i -= 1;
			else
				sum += i;
			printf("%d ", i);
		}
	}
	printf(")�� ���� %d�Դϴ�.\n", sum);
	return 0;
}
void myfflush() {
	while (getchar() != '\n')
		;
}
void input(int*n) {
	while ((scanf("%d", n) != 1) || (n < 0)) {
		myfflush();
		scanf("%d", n);
	}
}
int eo_input(int start, int end) {
	char eo;
	printf("* %d~%d ������ ¦���� ���� ���ұ��? Ȧ���� ���� ���ұ��?(¦��:e/Ȧ��:o) : ", start, end);
	scanf(" %c", &eo);
	while ((eo != 'e') && (eo != 'o')) {
		printf("* %d~%d ������ ¦���� ���� ���ұ��? Ȧ���� ���� ���ұ��?(¦��:e/Ȧ��:o) : ", start, end);
		scanf(" %c", &eo);
	}
	if (eo == 'e')
		return 1;
	else
		return 0;
}