#include<stdio.h>
#include<string.h>
void input(char*, char*);
int cal(char*);
void output(char*, int);
int main() {
	char str[100];
	int res;
	while (1) {
		input("# ������ �Է��Ͻÿ� : ", str);
		if (strcmp(str, "end") == 0)
			break;
		res = cal(str);
		output(str, res);
	}
	return 0;
}
void input(char* str, char* input) {
	printf("%s", str);
	scanf("%s", input);
}
int cal(char* str) {
	int len, tmp=0, sum = 0;
	len = strlen(str);
	for (int i = 0; i < len; i++) {
		if (47 < str[i] && str[i] < 58) {
			tmp += (str[i]-'0');
			if (47 < str[i + 1] && str[i + 1] < 58)
				tmp *= 10;
			else {
				sum += tmp;
				tmp = 0;
			}
		}
	}
	return sum;
}
void output(char* str, int res) {
	printf("\"%s\" ���� �� ���ڴ� [%d]�Դϴ�.\n", str, res);
}