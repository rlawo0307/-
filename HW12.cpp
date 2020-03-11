#include<stdio.h>
#include<string.h>
int main() {
	char name[100];
	int len;

	printf("이름을 입력하시오 : ");
	fgets(name, 100, stdin);
	len = strlen(name);
	name[len - 1] = '\0';

	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	return 0;
}