#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int random(int);
void myfflush();
int input();
void output(int);
int main() {
	int user, com = 0, print, win=0, draw=0;
	srand((unsigned int)time(NULL));
	while (1) {
		com = random(4);
		while (com == 0)
		    com = random(4);

		user = input();
		if (user == 1) {
			if (com == 1) {
				print = 1;
				draw++;
			}
			else if (com == 2) {
				print = 2;
				win++;
			}
			else {
				print = 3;
				output(print);
				break;
			}
		}
		else if (user == 2) {
			if (com == 1) {
				print = 4;
				output(print);
				break;
			}
			else if (com == 2) {
				print = 5;
				draw++;
			}
			else {
				print = 6;
				win++;
			}
		}
		else {
			if (com == 1) {
				print = 7;
				win++;
			}
			else if (com == 2) {
				print = 8;
				output(print);
				break;
			}
			else {
				print = 9;
				draw++;
			}
		}
		output(print);
	}
	printf("게임결과 : %d 승 %d 무\n", win, draw);
	return 0;	
}
int random(int n) {
	int res;
	res = rand() % n;
	return res;
}
void myfflush() {
	while (getchar() != '\n')
		;
}
int input() {
	int user;
	printf("# 바위는 1, 가위는 2, 보는 3 중에서 선택하세요 : ");
	if ((scanf("%d", &user) != 1) || (user < 1) || (user > 3)) {
		myfflush();
		input();
	}
	return user;
}
void output(int print) {
	switch (print)
	{
	case 1: printf("당신은 바위 선택, 컴퓨터는 바위 선택 : 비겼습니다.\n"); break;
	case 2: printf("당신은 바위 선택, 컴퓨터는 가위 선택 : 이겼습니다.\n"); break;
	case 3: printf("당신은 바위 선택, 컴퓨터는 보 선택 : 졌습니다.\n"); break;
	case 4: printf("당신은 가위 선택, 컴퓨터는 바위 선택 : 졌습니다.\n"); break;
	case 5: printf("당신은 가위 선택, 컴퓨터는 가위 선택 : 비겼습니다.\n"); break;
	case 6: printf("당신은 가위 선택, 컴퓨터는 보 선택 : 이겼습니다.\n"); break;
	case 7: printf("당신은 보 선택, 컴퓨터는 바위 선택 : 이겼습니다.\n"); break;
	case 8: printf("당신은 보 선택, 컴퓨터는 가위 선택 : 졌습니다.\n"); break;
	case 9: printf("당신은 보 선택, 컴퓨터는 보 선택 : 비겼습니다.\n"); break;
	}
}