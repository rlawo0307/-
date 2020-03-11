#include<stdio.h>
int main() {
	int date, i, gold = 1, j = 1, sum = 0;
	printf("* 기사의 근무일수를 입력하시오 : ");
	scanf("%d", &date);
	for (i = 0; i < date; i++, j++) {
		sum += gold;
		if (j == gold) {
			gold++;
			j = 0;
		}
	}
	printf("근무일 : %d 일 / 총 금화 수 : %d\n",date, sum);
	return 0;
}