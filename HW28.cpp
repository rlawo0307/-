#include<stdio.h>
#include<string.h>
int main() {
	int alpa = 0, num = 0, tmp = 0, etc = 0;
	char word='a';
	
	printf("# 영문 문장을 입력 하시오 : ");
	
	while (word != EOF) {
		word = getchar();
		if (((word >= 'a') && (word <= 'z')) || ((word >= 'A') && (word <= 'Z')))
			alpa++;
		else if ((word >= 48) && (word <= 57))
			num++;
		else if ((word == ' ') || (word == '\t') || (word == '\n'))
			tmp++;
		else
			etc++;
	}
	printf("* 영문자 대소문자 개수 : %d개\n* 숫자문자 개수 : %d개\n* 여백문자(space, tab, enter) 개수 : %d개\n* 그 외 기타문자 개수 : %d개\n", alpa, num, tmp, etc-1);
	return 0;
}