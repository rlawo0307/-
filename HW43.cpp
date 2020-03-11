#include<stdio.h>
void myfflush();
int main() {
	int i, j;
	char input;
	while (1) {
		printf("* 영문자 대문자 입력('A' ~ 'Z') : ");
		scanf("%c", &input);
		if (input < 65 || input > 90)
			break;
		else if (input >= 65 || input <= 90) {
			for (i = 0; i <= input - 65; i++) {
				for (j = 0; j <= i; j++)
					printf("%c", input - j);
				printf("\n");
			}
		}
		myfflush();
	}
	return 0;
}
void myfflush() {
	while (getchar() != '\n')
		;
}