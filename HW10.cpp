#include <stdio.h>
int main() {
	int num1, num2, abs, sub, mul;
	double quo;

	printf("�ΰ��� ������ �Է��Ͻÿ� : ");
	scanf("%d%d", &num1, &num2);

	abs = num1 + num2;	
	sub = num1 - num2;
	mul = num1 * num2;
	quo = (double)num1 / num2;
	
	printf("num1+num2 = %d\nnum1-num2 = %d\nnum1*num2 = %d\nnum1/num2 = %.2lf", abs, sub, mul, quo);
	return 0;
}