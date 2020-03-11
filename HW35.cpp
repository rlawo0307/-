#include<stdio.h>
void myfflush();
int input(char *);
double cal(int, int);
void output(int, int, double);
int main() {
	int code=0, use;
	double fee;
	while((code < 1) || (code > 3))
		code = input("* ����� �ڵ带 �Է��Ͻÿ�(1:������/2:�����/3:������) : "); 
	use = input("* ��뷮�� �Է��Ͻÿ�(ton����) : ");
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
		printf("# ������ڵ� : 1(������)\n");
	else if (code == 2)
		printf(" # ������ڵ� : 2(�����)\n");
	else
		printf(" # ������ڵ� : 3(������)\n");
	printf("# ��뷮 : %d ton\n", use);
	printf("# �Ѽ������ : %.0lf��\n", fee);
}