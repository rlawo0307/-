#include <stdio.h>
int main() {
	double year = 365.2422;
	int day, hour, min;
	double sec;

	day = (int)year / 1;
	year -= 1 * day;

	year = year * 24 * 60 * 60;
	hour = (int)year / (60 * 60);
	year -= 60 * 60 * hour;

	min = (int)year / 60;
	year -= 60 * min;

	sec = year;

	printf("365.2422���� %d�� %d�ð� %d�� %.2lf���Դϴ�.", day, hour, min, sec);
	return 0;
}