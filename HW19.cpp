#include<stdio.h>
int input();
int yearCheck(int);
int main() {
	int year, result;
	year = input();
	result = yearCheck(year);

	if (result == 1)
		printf("%d���� ����(Leap year)�Դϴ�.\n", year);
	else
		printf("%d���� ���(Common year)�Դϴ�.\n", year);
	return 0;
}
int input() {
	int year;
	printf("�⵵�� �Է��Ͻÿ� : ");
	scanf("%d", &year);
	return year;
}
int yearCheck(int year) {
	int result;
	if (year % 4)
		return 0;
	else {
		if (year % 100)
			return 1;
		else {
			if (year % 400)
				return 0;
			else
				return 1;
		}
	}
}