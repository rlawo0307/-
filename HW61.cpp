#include<stdio.h>
#include<string.h>
void input(int, char*);
void sortAry(char(*)[20], char(*)[20]);
void output(char(*)[20]);
int main() {
	char str[5][20] = { '\0' }, sort[5][20] = { '\0' }, tmp[5][20] = { '\0' };
	for (int i = 0; i < 5; i++) {
		input(i, str[i]);
		strcpy(sort[i], str[i]);
	}
	sortAry(tmp, sort);
	output(sort);
	return 0;
}
void input(int i, char* str) {
		printf("# %d번 문자열을 입력하시오 : ", i+1);
		scanf("%s", str);
}
void sortAry(char(*tmp)[20], char(*sort)[20]) {
	int n;
	for (int i = 0; i < 4; i++)
		for (int j = i + 1; j <= 5; j++) {
			n = strcmp(sort[i], sort[j]);
			if (n > 0) {
				strcpy(tmp[i], sort[i]);
				strcpy(sort[i], sort[j]);
				strcpy(sort[j], tmp[i]);
			}
		}
}
void output(char(*sort)[20]) {
	int len;
	for (int i = 0; i < 5; i++) {
		len = strlen(sort[i]);
		printf("str[%d] = %s  %c  %c\n", i, sort[i], sort[i][0], sort[i][len - 1]);
	}
}