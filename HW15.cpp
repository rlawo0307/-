#include<stdio.h>
int input_weight();
double input_height();
void output(double);
double cal(int, double);
int main() {
	int weight;
	double height, BMI;
	weight = input_weight();
	height = input_height();
	BMI = cal(weight, height);
	output(BMI);
	return 0;
}
int input_weight() {
    int weight;
	printf("�����Ը� �Է��ϼ���(kg) : ");
	scanf("%d", &weight);
	return weight;
}
double input_height() {
	double height;
	printf("Ű�� �Է��ϼ���(m) : ");
	scanf("%lf", &height);
	return height;
}
double cal(int weight, double height) {
	double BMI;
	BMI = weight / (height * height);
	return BMI;
}
void output(double BMI) {
	if (BMI < 18.5)
		printf("����� BMI�� %.1lf���� ��ü���Դϴ�.\n", BMI);
	else if (BMI < 25.0)
		printf("����� BMI�� %.1lf���� ����ü���Դϴ�.\n", BMI);
	else if (BMI < 30.0)
		printf("����� BMI�� %.1lf���� ��ü���Դϴ�.\n", BMI);
	else if (BMI < 40.0)
		printf("����� BMI�� %.1lf���� ���Դϴ�.\n", BMI);
	else
		printf("����� BMI�� %.1lf���� �����Դϴ�.\n", BMI);
}