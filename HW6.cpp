#include<stdio.h>
int input();
void output(double);
int main() {
	int F;
	double C;
	
	F = input();
	C = 5.0 / 9.0 * (F - 32);
	output(C);
	return 0;
}
int input() {
	int F;
	printf("ȭ�� �µ��� �Է��ϼ��� : ");
	scanf("%d", &F);
	return F;
}
void output(double C) {
	printf("���� �µ��� %.1lf ���Դϴ�.", C);
}