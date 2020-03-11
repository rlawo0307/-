#include<stdio.h>
int check(int*);
void sort(int*);
int main() {
	int num[6], res;
	while (1) {
		printf("# 0~9 사이의 숫자 6개를 입력 하시오 : ");
		for (int i = 0; i < 6; i++)
			if (scanf("%d", &num[i]) != 1)
				return 1;
		sort(num);
		res = check(num);
		for (int i = 0; i < 6; i++)
			printf("%d", num[i]);
		if (res == 1)
			printf("는 Maybe Win 입니다.\n");
		else
			printf("는 Maybe Win이 아닙니다.\n");
	}
	return 0;
}
int check(int* num) {
	for (int i = 0; i < 4; i++)
		if (num[i+2] == num[i+1]+1 && num[i+1] == num[i] +1)
			return 1;
	for (int i = 0; i < 4; i++)
		if (num[i] == num[i + 1] && num[i + 1] == num[i + 2])
				return 1;
	return 0;
}
void sort(int* num) {
	int minIndex, tmp;
	for (int i = 0; i < 5; i++) {
		minIndex = i;
		for (int j = i + 1; j < 6; j++) {
			if (num[minIndex] > num[j])
				minIndex = j;
		}
		tmp = num[i];
		num[i] = num[minIndex];
		num[minIndex] = tmp;
	}
}