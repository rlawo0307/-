#include<stdio.h>
#include<string.h>
void Input(char*, char*);
int strcheck(char*, char);
int main() {
	int index;
	char string[30], let[2];
	while (1) {
		Input("# ���ڿ��� �Է��Ͻÿ� : ", string);
		if (strcmp(string, "end") == 0)
			break;
		Input("# ���ڸ� �Է��Ͻÿ� : ", let);
		index = strcheck(string, let[0]);
		if (index == -1)
			printf("\"%s\"���ڿ� �ȿ� '%s'���ڴ� �������� �ʽ��ϴ�.\n", string, let);
		else
			printf("\"%s\"���ڿ� �ȿ� '%s'���ڴ� %d�� ��ġ�� �����մϴ�.\n", string, let, index);
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