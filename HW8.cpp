#include <stdio.h>
int main() {
	int his_sc, lit_sc, ent_sc, sum;
	double mean;

	printf("����, ����, ���� ������ �Է��ϼ��� : ");
	scanf("%d%d%d", &his_sc, &lit_sc, &ent_sc);

	sum = his_sc + lit_sc + ent_sc;
	mean = sum / 3.0;

	printf("������ %d �̰� ����� %.2lf�Դϴ�.", sum, mean);
	return 0;
}