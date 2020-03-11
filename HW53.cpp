#include<stdio.h>
#include<string.h>
void Input(char*, char*);
int strcheck(char*, char);
int main() {
	int index;
	char string[30], let[2];
	while (1) {
		Input("# 문자열을 입력하시오 : ", string);
		if (strcmp(string, "end") == 0)
			break;
		Input("# 문자를 입력하시오 : ", let);
		index = strcheck(string, let[0]);
		if (index == -1)
			printf("\"%s\"문자열 안에 '%s'문자는 존재하지 않습니다.\n", string, let);
		else
			printf("\"%s\"문자열 안에 '%s'문자는 %d번 위치에 존재합니다.\n", string, let, index);
	}
	return 0;
}
void Input(char* str, char* input) {
	printf("%s", str);
	scanf("%s", input);
}
int strcheck(char* str, char let) {
	int len, index = 0;
	len = strlen(str);
	for (int i = 0; i < len; i++, index++)
		if (str[i] == let)
			return index;
	if (index == len)
		return -1;
}