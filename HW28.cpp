#include<stdio.h>
#include<string.h>
int main() {
	int alpa = 0, num = 0, tmp = 0, etc = 0;
	char word='a';
	
	printf("# ���� ������ �Է� �Ͻÿ� : ");
	
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
	printf("* ������ ��ҹ��� ���� : %d��\n* ���ڹ��� ���� : %d��\n* ���鹮��(space, tab, enter) ���� : %d��\n* �� �� ��Ÿ���� ���� : %d��\n", alpa, num, tmp, etc-1);
	return 0;
}