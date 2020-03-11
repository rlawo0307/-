#include<stdio.h>
void myfflush();
void input(int*);
int eo_input(int, int);
int main() {
	int start = 1, end = 2, res, i, sum = 0;
	printf("# 시작 값을 입력하시오 : ");
	input(&start);
	printf("# 끝 값을 입력하시오 : ");
	input(&end);
	while (start >= end) {
		printf("# 끝 값을 입력하시오 : ");
		input(&end);
	}
	res = eo_input(start, end);
	if (res == 1) {
		printf("  %d~%d 까지의 짝수(", start, end);
		for (i = start; i <= end; i += 2) {
			if (start % 2 == 0)
				sum += i;
			else
				i -= 1;
			printf("%d ", i);
		}
	}
	else {
		printf("  %d~%d 까지의 홀수(", start, end);
		for (i = start; i <= end; i += 2) {
			if (start % 2 == 0)
				i -= 1;
			else
				sum += i;
			printf("%d ", i);
		}
	}
	printf(")의 합은 %d입니다.\n", sum);
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
	printf("* %d~%d 까지의 짝수의 합을 구할까요? 홀수의 합을 구할까요?(짝수:e/홀수:o) : ", start, end);
	scanf(" %c", &eo);
	while ((eo != 'e') && (eo != 'o')) {
		printf("* %d~%d 까지의 짝수의 합을 구할까요? 홀수의 합을 구할까요?(짝수:e/홀수:o) : ", start, end);
		scanf(" %c", &eo);
	}
	if (eo == 'e')
		return 1;
	else
		return 0;
}