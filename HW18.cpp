#include<stdio.h>
int input_age();
int input_num();
void output(int, int, int);
int main() {
	int age, num, fee, dis, total_fee;
	age = input_age();
	num = input_num();
	
	if (age <=7)
		fee = 500 * num;
	else if (age <= 13)
		fee = 700 * num;
	else if (age <= 19)
		fee = 1000 * num;
	else if (age <= 55)
		fee = 1500 * num;
	else
		fee = 500 * num;

	if (num >= 5)
		dis = fee * 0.1;
	else
		dis = 0;
	
	total_fee = fee - dis;

	output(fee, dis, total_fee);
}
int input_age() {
	int age;
	printf("���尴�� ���̸� �Է��Ͻÿ� : ");
	scanf("%d", &age);
	return age;
}
int input_num() {
	int num;
	printf("���尴�� ���� �Է��Ͻÿ� : ");
	scanf("%d", &num);
	return num;
}
void output(int fee, int dis, int total_fee) {
	printf("\n\n����� => %d��\n���αݾ� => %d��\n�����ݾ� => %d��\n", fee, dis, total_fee);
}