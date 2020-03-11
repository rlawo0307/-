#include<stdio.h>
int inputDate(int*, int*, int*);
int CL(int);
int yearCheck(int, int, int, int);
int cal(int, int, int, int);
void output(int, int, int, int);
int main() {
	int end=0, check = 1, year, month, day, cl, total_date;
	while (1) {
		while (check == 1) {
			end = inputDate(&year, &month, &day);
			if (end == 1)
				return 0;
			cl = CL(year);
			check = yearCheck(cl, year, month, day);
		}
		total_date = cal(cl, year, month, day);
		output(year, month, day, total_date);
		check = 1;
	}
	return 0;
}
int inputDate(int* year, int* month, int* day) {
	printf("* 년 월 일을 입력하시오 : ");
	if ((scanf("%d%d%d", year, month, day)) != 3)
		return 1;
	else
		return 0;
}
int CL(int year) {
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
int yearCheck(int cl, int year, int month, int day) {
	if (month == 2)
		if (cl == 1) {
			if (day > 29)
				return 1;
		}
		else {
			if (day > 28)
				return 1;
		}
	for (int i = 1; i <= 12; i += 2)
		if (day > 31)
			return 1;
	for (int i = 4; i <= 12; i += 2)
		if (day > 30)
			return 1;
	return 0;
}
int cal(int cl, int year, int month, int day) {
	int total_date = 0, res, mon[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	for (int i = 1900; i < year; i++) {
		res = CL(i);
		if (res == 0)
			total_date += 365;
		else
			total_date += 366;
	}
	for (int i = 1; i < month; i++)
			total_date += mon[i-1];
	if ((cl == 1) && (month > 2))
		total_date += 1;
	total_date += day;		
	return total_date;
}
void output(int year, int month, int day, int total_date) {
	int res;
	res = total_date % 7;
	printf("%d년 %d월 %d일은 ", year, month, day);
	if (res == 0)
		printf("일요일입니다.\n");
	else if (res == 1)
		printf("월요일입니다.\n");
	else if (res == 2)
		printf("화요일입니다.\n");
	else if (res == 3)
		printf("수요일입니다.\n");
	else if (res == 4)
		printf("목요일입니다.\n");
	else if (res == 5)
		printf("금요일입니다.\n");
	else
		printf("토요일입니다.\n");
}