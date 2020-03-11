#include <stdio.h>
int main() {
	int code;
	char ch;
	
	printf("ASCII code값을 입력하시오 : ");
	scanf("%d", &code);
	ch = (char)code;
	printf("%d은 '%c'의 ASCII code 입니다.", code, ch);
	return 0;
}