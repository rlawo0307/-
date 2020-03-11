#pragma warning (disable : 4996)
#include<stdio.h>
#include<windows.h>
#include<conio.h>
void gotoxy(int, int);
int main() {
	int sx, ex, sy, ey;
	char key;
	printf("sx ÁÂÇ¥ ÀÔ·Â(0~70) : ");
	scanf("%d", &sx);
	printf("ex ÁÂÇ¥ ÀÔ·Â(%d~78) : ", sx+1);
	scanf("%d", &ex);
	while ((ex < sx) || (ex > 78))
		scanf("%d", &ex);
	printf("sy ÁÂÇ¥ ÀÔ·Â(1~20) : ");
	scanf("%d", &sy);
	printf("ey ÁÂÇ¥ ÀÔ·Â(%d~24) : ", sy+1);
	scanf("%d", &ey);
	while ((ey < sy) || (ey > 24))
		scanf("%d", &ey);
	system("cls");
	for (int i = sy; i <= ey; i++) {
		for (int j = sx; j <= ex; j++) {
			gotoxy(j, i);
			if ((i == sy) || (i == ey))
				printf("*");
			else {
				if ((j == sx) || (j == ex))
					printf("*");
				else
					printf(" ");
			}
		}
		printf("\n");
	}
	while (1) {
		key = getch();
		while (key != 27) {
			switch (key) {
			case 'w': if (sy == 0) { printf("\a"); break; } else { sy -= 1; ey -= 1; break; }
			case 'a': if (sx == 0) { printf("\a"); break; } else { sx -= 1; ex -= 1; break; }
			case 'd': if (ex == 79){ printf("\a"); break; } else { sx += 1; ex += 1; break; }
			case 's': if (ey == 24){ printf("\a"); break; } else { sy += 1; ey += 1; break; }
			}
			system("cls");
			for (int i = sy; i <= ey; i++) {
				for (int j = sx; j <= ex; j++) {
					gotoxy(j, i); 
					if ((i == sy) || (i == ey))
						printf("*");
					else {
						if ((j == sx) || (j == ex))
							printf("*");
						else
							printf(" ");
					}
				}
			}
			break;
		}
		if (key == 27)
			break;
	}
	return 0;
}
void gotoxy(int x, int y) {
	COORD Pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}