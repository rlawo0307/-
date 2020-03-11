#include<stdio.h>
char menu();
void myfflush();
int deposit(int);
int withdraw(int);
int inputInt(char*, int);
int main() {
	int bal=0;
	char mchar;
	printf("현재 잔액은 %d원입니다.\n\n\n", bal);
	while (1) {
		mchar = menu();
		if (mchar == 'q')
			break;
		switch (mchar)
		{
		case 'i': bal = deposit(bal); break;
		case 'o': bal = withdraw(bal); break;
		}
		myfflush();
		printf("\n\n");
	}
	return 0;
}
char menu() {
	char input;
	printf("# 메뉴를 선택하시오(i-입금, 0-출금, q-종료) : ");
	scanf("%c", &input);
	while ((input != 'i') && (input != 'o') && (input != 'q')) {
		printf("* 잘못 입력하셨습니다.\n");
		myfflush();
		printf("\n# 메뉴를 선택하시오(i-입금, 0-출금, q-종료) : ");
		scanf("%c", &input);
	}
	return input;
}
void myfflush() {
	while (getchar() != '\n')
		;
}
int inputInt(char* str, int input) {
	printf("%s", str);
	while ((scanf("%d", &input) != 1) || (input < 0)) {
		printf("잘못 입력하셨습니다. 다시 입력하십시오. : ");
		myfflush();
	}
	return input;
}
int deposit(int bal) {
	int de=0;
	de = inputInt("# 입금액을 입력하세요 : ", de);
	bal += de;
	printf("* 현재 잔액은 %d원 입니다.\n", bal);
	return bal;
}
int withdraw(int bal) {
	int wd=0;
	wd = inputInt("# 출금액을 입력하세요 : ", wd);
	if (wd > bal)
		printf("* 잔액이 부족합니다.\n* 현재 잔액은 %d원 입니다.\n", bal);
	else {
		bal -= wd;
		printf("* 현재 잔액은 %d원 입니다.\n", bal);
	}
	return bal;
}