#include <stdio.h>
int main() {
	int code;
	char ch;
	
	printf("ASCII code���� �Է��Ͻÿ� : ");
	scanf("%d", &code);
	ch = (char)code;
	printf("%d�� '%c'�� ASCII code �Դϴ�.", code, ch);
	return 0;
}