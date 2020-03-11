#pragma warning(disable : 4996)
#include<stdio.h>
#include<string.h>
int menu(char*);
void openFan(unsigned char*, char*);
void offFan(unsigned char*, char*);
void reverseFan(unsigned char*);
void displayFan(unsigned char*);
void myfflush();
int main() {
	unsigned char tmp[9] = { 0x0 }, Fan[9];
	int menu_input;
	for (int i = 0; i < 9; i++)
		Fan[i] = tmp[i];
	while (1) {
		menu_input = menu("1. 환풍구 열기 / 2. 환풍구 닫기 / 3. 환풍구 전체 전환 / 4. 종료 : ");
		if (menu_input == ' ')
			break;
		else if (menu_input == 1)
			openFan(Fan, "*OPEN할 FAN 번호를 입력하시오(1 - 8) : ");
		else if (menu_input == 2)
			offFan(Fan, "*OFF할 FAN 번호를 입력하시오(1 - 8) : ");
		else if (menu_input == 3)
			reverseFan(Fan);
		else if (menu_input == 4)
			return 0;
		displayFan(Fan);
	}
	return 0;
}
void myfflush() {
	while (getchar() != '\n')
		;
}
int menu(char* str) {
	int res, input;
	printf("%s", str);
	res = scanf("%d", &input);
	while ((res != 1) || (input < 1) || (input > 4)) {
		if (res != 1) {
			myfflush();
			printf("%s", str);
			res = scanf("%d", &input);
		}
		else if ((input < 1) || (input > 4)) {
			printf("%s", str);
			res = scanf("%d", &input);
		}
	}
	return input;
}
void openFan(unsigned char* Fan, char* str) {
	int res, Fannum;
	printf("----------------------------------------------------------------------------\n");
	printf("                      Fan 열기 작업 실행 화면\n");
	printf("----------------------------------------------------------------------------\n");
	printf("%s", str);
	res = scanf("%d", &Fannum);
	while ((res != 1) || ((Fannum < 1) || (Fannum > 8))) {
		if (res != 1) {
			myfflush();
			printf("%s", str);
			res = scanf("%d", &Fannum);
		}
		else if ((Fannum < 1) || (Fannum > 8)) {
			printf("%s", str);
			res = scanf("%d", &Fannum);
		}
	}
	printf("----------------------------------------------------------------------------\n");
	*(Fan+(Fannum-1)) = 0x1;
}
void offFan(unsigned char* Fan, char* str) {
	int res, Fannum;
	printf("----------------------------------------------------------------------------\n");
	printf("                       Fan 닫기 작업 실행 화면\n");
	printf("----------------------------------------------------------------------------\n");
	printf("%s", str);
	res = scanf("%d", &Fannum);
	while ((res != 1) || ((Fannum < 1) || (Fannum > 8))) {
		if (res != 1) {
			myfflush();
			printf("%s", str);
			res = scanf("%d", &Fannum);
		}
		else if ((Fannum < 1) || (Fannum > 8)) {
			printf("%s", str);
			res = scanf("%d", &Fannum);
		}
	}
	printf("----------------------------------------------------------------------------\n");
	*(Fan+(Fannum-1)) = 0x0;
}
void reverseFan(unsigned char* Fan) {
	printf("----------------------------------------------------------------------------\n");
	printf("                    Fan 전체 전환 작업 실행 화면\n");
	printf("----------------------------------------------------------------------------\n");
	printf("전체 FAN의 상태가 전환되었습니다.(ON, OFF 상태 뒤바뀜)\n");
	printf("----------------------------------------------------------------------------\n");
	for (int i = 0; i < 8; i++) {
		if (*(Fan+i) == 0x0)
			*(Fan+i) = 0x1;
		else
			*(Fan+i) = 0x0;
	}
}
void displayFan(unsigned char* Fan) {
	for (int i = 0; i < 8; i++)
		printf("%d번FAN\t", i+1);
	printf("\n");
	for (int i = 0; i < 8; i++) {
		if (Fan[i] == 0x0)
			printf("  OFF\t");
		else
			printf("  ON\t");
	}
	printf("\n----------------------------------------------------------------------------\n");
}