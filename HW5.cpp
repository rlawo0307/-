#include<stdio.h>
int input();
void output(double);
int main() {
	int use, base = 660;
	double per = 88.5, total_fee, tax, final_fee;

	use = input();

	total_fee = base + (use * per);
	tax = total_fee * 0.09;
	final_fee = total_fee + tax;

	output(final_fee);

	return 0;
}
int input() {
	int use;
	printf("���� ��뷮�� �Է��ϼ���(kw) : ");
	scanf("%d", &use);
	return use;
}
void output(double final_fee) {
	printf("���� ������� %f �� �Դϴ�.", final_fee);
}