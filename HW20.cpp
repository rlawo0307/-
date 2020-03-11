#include<stdio.h>
int input();
int cal_gp(int);
int cal_t(int);
void output(int, int, int, int);
int main() {
	int hour, gp, tax, np;
	hour = input();
	gp = cal_gp(hour);
	tax = cal_t(gp);
	np = gp - tax;
	output(hour, gp, tax, np);
}
int input() {
	int hour;
	printf("* 1���ϰ��� �ٹ��ð��� �Է��Ͻÿ� : ");
	scanf("%d", &hour);
	return hour;
}
int cal_gp(int hour) {
	int gp, base, ex;
	if (hour > 40) {
		base = 3000 * 40;
		ex = (hour - 40) * 3000 * 1.5;
	}
	else {
		ex = 0;
		base = 3000 * hour;
	}
	gp = base + ex;
	return gp;
}
int cal_t(int gp) {
	int tax;
	if (gp <= 100000)
		tax = gp * 0.15;
	else
		tax = 100000 * 0.15 + (gp - 100000) * 0.25;
	return tax;
}
void output(int hour, int gp, int tax, int np) {
	printf("# �Ѽ��� : %d��\n# ��  �� : %6d��\n# �Ǽ��� : %6d��\n", gp, tax, np);
}