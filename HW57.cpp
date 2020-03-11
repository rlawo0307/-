#include<stdio.h>
#include<string.h>
#include<ctype.h>
void input(char*, char*);
int check(char*);
void output(char*, int);

int main() {
	char str[100], tmp[100];
	int res;
	while (1) {
		input("# 단어 입력 : ", str);
		if (strcmp(str, "end") == 0)
			break;
		strcpy(tmp, str);
		res = check(str);
		output(tmp, res);
	}
	return 0;
}
void input(char* str, char* input) {
	printf("%s", str);
	scanf("%s", input);
}
int check(char* str) {
	int len;
	len = strlen(str);
	for (int i = 0; i < len / 2; i++) {
		str[i] = toupper(str[i]);
		str[len-1-i] = toupper(str[len - 1 - i]);
		if (str[i] == str[len - 1 - i])
			;
		else
			return 0;
	}
	return 1;
}
void output(char* str, int res) {
	if (res == 1)
		printf("\"%s\" : 회문입니다!\n", str);
	else
		printf("\"%s\" : 회문이 아닙니다!\n", str);
}