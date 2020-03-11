#include<stdio.h>
int input();
int yearCheck(int);
int main() {
	int year, result;
	year = input();
	result = yearCheck(year);

	if (result == 1)
		printf("%d년은 윤년(Leap year)입니다.\n", year);
	else
		printf("%d년은 평년(Common year)입니다.\n", year);
	return 0;
}
int input() {
	int year;
	printf("년도를 입력하시오 : ");
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