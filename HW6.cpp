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
	printf("화씨 온도를 입력하세요 : ");
	scanf("%d", &F);
	return F;
}
void output(double C) {
	printf("섭씨 온도는 %.1lf 도입니다.", C);
}