#include<stdio.h>
#include<string.h>
int input(char*, char*);
int transNum(char*);
void transStr(int, char*);
int main() {
	int num, sum = 0;
	char numstr[14] = { '\0' }, sumStr[14] = { '\0' };
	while (1) {
		input("금액 입력 : ", numstr);
		if (strcmp(numstr, "0000") == 0)
			break;
		num = transNum(numstr);
		sum += num;
	}
	transStr(sum, sumStr);
	printf("\n총합 : %s", sumStr);
	return 0;	
}
int input(char* str, char* numstr) {
	printf("%s", str);
	scanf("%s", numstr);
	return 0;
}
int transNum(char* numstr) {
	int num = 0;
	for (int i = 0; i < 14; i++) {
		if (numstr[i] >= 48 && numstr[i] <= 57) {
			num *= 10;
			num += (numstr[i] - 48);
		}
		else if (numstr[i] == ',');
		else if (numstr[i] == '\0')
			break;
	}
	return num;
}
void transStr(int sum, char* sumStr) {
	int check = 1000000000, put;
	for (int i = 0; i < 14; check /= 10) {
		if (i == 1 || i == 5 || i == 9) {
			sumStr[i] = ',';
			check *= 10;
			i++;
		}
		else {
			put = sum / check;
			if (put != 0) {
				sumStr[i] = put + 48;
				sum -= put * check;
				i++;
			}
			if (sum < 10) {
				sumStr[i] = sum + 48;
				break;
			}
		}
	}
}