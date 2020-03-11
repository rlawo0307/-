#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int len;
	printf("* 문자열 입력 : ");
	scanf("%s", str);
	len = strlen(str);
	printf("[%*.*s...]\n", len, len / 2, str);
	return 0;
}
