#include<stdio.h>
int main() {
	int date, i, gold = 1, j = 1, sum = 0;
	printf("* ����� �ٹ��ϼ��� �Է��Ͻÿ� : ");
	scanf("%d", &date);
	for (i = 0; i < date; i++, j++) {
		sum += gold;
		if (j == gold) {
			gold++;
			j = 0;
		}
	}
	printf("�ٹ��� : %d �� / �� ��ȭ �� : %d\n",date, sum);
	return 0;
}