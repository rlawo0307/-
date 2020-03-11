#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<conio.h>
void gotoxy(int, int);
void input(char*, char*);
void scroll(char*, int);
void blink(char*);
int main() {
	char str[51];
	int len;
	input("문자열을 입력하시오 : ", str);
	len = strlen(str);
	scroll(str, len);
	blink(str);
	return 0;
}
void input(char* str, char* input) {
	printf("%s", str);
	fgets(input, 51, stdin);
}
void scroll(char* str, int len) {
	char tmp;
	gotoxy(30, 12); 
	printf("%s", str);
	Sleep(1000);
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < len-1; j++) {
			tmp = str[0];
			for (int k = 0; k < len - 1; k++)
				str[k] = str[k + 1];
			str[len - 2] = tmp;
			gotoxy(30, 12);
			printf("%s", str);
			Sleep(1000);
		}
	}
}
void blink(char* str) {
	system("cls");
	for (int i = 0; i < 3; i++) {
		Sleep(500);
		gotoxy(30, 12);
		printf("%s", str);
		Sleep(500);
		system("cls");
	}
}
void gotoxy(int x, int y) {
	COORD Pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
