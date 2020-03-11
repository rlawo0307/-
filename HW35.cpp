#include<stdio.h>
void myfflush();
int input(char *);
double cal(int, int);
void output(int, int, double);
int main() {
	int code=0, use;
	double fee;
	while((code < 1) || (code > 3))
		code = input("* 사용자 코드를 입력하시오(1:가정용/2:상업용/3:공업용) : "); 
	use = input("* 사용량을 입력하시오(ton단위) : ");
	fee = cal(code, use);
	output(code, use, fee);

}
void myfflush() {
	while (getchar() != '\n')
		;
}
int input(char *mp) {
	int input;
	printf("%s", mp);
	while ((scanf("%d", &input) != 1) || (input < 0)) {
		myfflush();
		printf("%s", mp);
	}
	return input;
}
double cal(int code, int use) {
	double fee, total_fee;
	if (code == 1)
		fee = use * 50;
	else if (code == 2)
		fee = use * 45;
	else
		fee = use * 30;
	total_fee = fee * 1.05;
	return total_fee;
}
void output(int code, int use, double fee) {
	printf("\n\n");
	if (code == 1)
		printf("# 사용자코드 : 1(가정용)\n");
	else if (code == 2)
		printf(" # 사용자코드 : 2(상업용)\n");
	else
		printf(" # 사용자코드 : 3(공업용)\n");
	printf("# 사용량 : %d ton\n", use);
	printf("# 총수도요금 : %.0lf원\n", fee);
}