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
	printf("* 1주일간의 근무시간을 입력하시오 : ");
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
	printf("# 총수입 : %d원\n# 세  금 : %6d원\n# 실수입 : %6d원\n", gp, tax, np);
}