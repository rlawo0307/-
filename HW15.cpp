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
	printf("몸무게를 입력하세요(kg) : ");
	scanf("%d", &weight);
	return weight;
}
double input_height() {
	double height;
	printf("키를 입력하세요(m) : ");
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
		printf("당신의 BMI는 %.1lf으로 저체중입니다.\n", BMI);
	else if (BMI < 25.0)
		printf("당신의 BMI는 %.1lf으로 정상체중입니다.\n", BMI);
	else if (BMI < 30.0)
		printf("당신의 BMI는 %.1lf으로 과체중입니다.\n", BMI);
	else if (BMI < 40.0)
		printf("당신의 BMI는 %.1lf으로 비만입니다.\n", BMI);
	else
		printf("당신의 BMI는 %.1lf으로 고도비만입니다.\n", BMI);
}