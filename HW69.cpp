#include<stdio.h>
#include<windows.h>
#include<conio.h>
#define DARKGRAY 8
#define LIGHTBLUE 9
#define LIGHTRED 12
#define BLACK 0
#define COMMON 0
#define LEAP 1
void textcolor(int, int);
void gotoxy(int, int);
void dayCal(int, int, int*, int*, int*);
void printCal(int, int);
int CL(int);
int main() {
	int year = 2016, month = 7;
	char key;
	while (1) {
		printCal(year, month);
		key = getch();
		switch (key) {
		case 'w': year--; break;
		case 's': year++; break;
		case 'a': if (month == 1) { year--; month = 12; } else month--; break;
		case 'd': if (month == 12) { year++; month = 1;	} else month++; break;
		}
	}
		return 0;
}
void printCal(int year, int month) {
	int mon[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int last_day, start_day;
	int row;
	dayCal(year, month, &start_day, &last_day, mon);
	textcolor(DARKGRAY, BLACK); 
	gotoxy(10, 5);
	printf("          [ %d . %d ]", year, month);
	gotoxy(10, 7);
	printf("SUN  MON  TUE  WED  THU  FRI  SAT\n");
	gotoxy(8, 8);
	printf("-------------------------------------");
	gotoxy(10 + 5 * (start_day - 1), 9);
	row = start_day-1;
	for (int i = 0, j = 1; i < last_day; i++, row++) {
		if (row == 7) {
			gotoxy(10, 9 + j);
			j++;
			row = 0;
		}
		if (row == 0) textcolor(LIGHTRED, BLACK);
		else if (row == 6) textcolor(LIGHTBLUE, BLACK);
		else textcolor(DARKGRAY, BLACK);
		printf("%3d  ", i + 1);
	}
}
void dayCal(int year, int month, int* start_day, int* last_day, int* mon) {
	int cl, total_date = 0;
	for (int i = 1900; i < year; i++) {
		cl = CL(i);
		if (cl == COMMON) total_date += 365;
		else total_date += 366;
	}
	for (int i = 1; i < month; i++)
		total_date += mon[i - 1];
	cl = CL(year);
	if ((cl == LEAP) && (month > 2)) total_date += 1;
	*start_day = total_date % 7 + 2;
	if (month == 2) 
		if (cl == COMMON) *last_day = mon[1];
		else *last_day = mon[1] + 1;
	else *last_day = mon[month - 1];
}
int CL(int year) {
	if (year % 4) return COMMON;
	else {
		if (year % 100) return LEAP;
		else {
			if (year % 400)	return COMMON;
			else return LEAP; } }
}
void gotoxy(int x, int y) {
	COORD Pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
void textcolor(int foreground, int background) {
	int color = foreground + background * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}