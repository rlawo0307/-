#include<stdio.h>
#include<string.h>
int main() {
	char name[100];
	int len;

	printf("�̸��� �Է��Ͻÿ� : ");
	fgets(name, 100, stdin);
	len = strlen(name);
	name[len - 1] = '\0';

	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	return 0;
}