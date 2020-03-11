#include<stdio.h>
void input(char*, int*);
void myfflush();
void trans(char*, int);
int main() {
	int num;
	char str[14] = { '\0' };
	while (1) {
		input("# 금액 입력 : ", &num);
		if (num < 0)
			return 1;
		trans(str, num);
		printf("%d -> %s\n", num, str);
	}
	return 0;	
}
void myfflush() {
	while (getchar() != '\n')
		;
}
void input(char* str, int* num) {
	printf("%s", str);
	while (scanf("%d", num) != 1) {
		myfflush();
		scanf("%d", num);
	}
}
void trans(char* str, int num) {
	int check = 1000000000, res, i = 10, a, b;
	res = num / check;
	while (res == 0) {
		check /= 10;
		i--;
		res = num / check;
	}
	for (int j = 0; j < i; j++) {
		str[j] = num / check + 48;
		num -= (str[j] - 48) * check;
		check /= 10;
	}
	a = i - 1;
	b = a / 3;
	switch (b) {
	case 0: break;
	case 1: for (int j = i - 1; j >= i - 3; j--) str[j + 1] = str[j]; str[i-3] = ','; i++; break;
	case 2: for (int j = i - 1; j >= i - 3; j--) str[j + 1] = str[j]; str[i-3] = ','; i++; for (int j = i - 1; j >= i - 7; j--) str[j + 1] = str[j]; str[i-7] = ','; i++; break;
	case 3: for (int j = i - 1; j >= i - 3; j--) str[j + 1] = str[j]; str[i-3] = ','; i++; for (int j = i - 1; j >= i - 7; j--) str[j + 1] = str[j]; str[i-7] = ','; i++; for (int j = i - 1; j >= i - 11; j--) str[j + 1] = str[j]; str[i-11] = ','; i++; break;
	}
}