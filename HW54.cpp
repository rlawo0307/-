#include<stdio.h>
#include<string.h>
void Input(char*, char*);
int strcheck(char*, char, int);
int strletcheck(char, char);
int main() {
	int index, len, res=0;
	char string[30], let[2];
	while (1) {
		Input("# ���ڿ��� �Է��Ͻÿ� : ", string);
		if (strcmp(string, "end") == 0)
			break;
		len = strlen(string);
		Input("# ���ڸ� �Է��Ͻÿ� : ", let);
		index = strcheck(string, let[0], len);
		if (index == -1)
			printf("\"%s\"���ڿ� �ȿ� '%s'���ڴ� �������� �ʽ��ϴ�.\n", string, let);
		else {
			printf("\"%s\"���ڿ� �ȿ� '%s'���ڴ�", string, let);
			for (int i = 0; i < len; i++) {
				res = strletcheck(string[i], let[0]);
				if (res == 1)
					printf(" %d�� ��ġ", i);
			}
			printf("�� �����մϴ�.\n");
		}
	}
	return 0;
}
void Input(char* str, char* input) {
	printf("%s", str);
	scanf("%s", input);
}
int strcheck(char* str, char let, int len) {
	int index = 0;
	for (int i = 0; i < len; i++, index++)
		if (str[i] == let)
			return index;
	if (index == len)
		return -1;
}
int strletcheck(char strlet, char let) {
	if (strlet == let)
		return 1;
	else
		return 0;
}