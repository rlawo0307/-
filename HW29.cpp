#include<stdio.h>
void myfflush();
int transNumber(int);
void inputUInt(char*, int*);
void output(int*, int, int, int, int);
int main() {
	int start, end, n, res, num=0, gozip[10000] = { 0 };
	inputUInt("시작 값(P1) : ", &start);
	inputUInt("끝 값(P2) : ", &end);
	inputUInt("고집수(N) : ", &n);
	for (int i = start; i <= end; i++) {
		res = transNumber(i);
		if (res == n) {
			gozip[i] = i;
			num++;
		}
	}
	output(gozip, start, end, n, num);
	return 0;
}
void myfflush() {
	while (getchar() != '\n')
		;
}void inputUInt(char* str, int* input) {
	int res;
	printf("%s", str);
	res = scanf("%d", input);
	while ((res != 1) || (*input < 0)) {
		if (res != 1) {
			myfflush();
			printf("%s", str);
			res = scanf("%d", input);
		}
		else if (*input < 0) {
			printf("%s", str);
			res = scanf("%d", input);
		}
	}
}
int transNumber(int i) {
	int tho, hun, ten, one, res = 0;
	while (1) {
		tho = i / 1000;
		i -= tho * 1000;
		hun = i / 100;
		i -= hun * 100;
		ten = i / 10;
		i -= ten * 10;
		one = i;
		if (tho == 0) {
			if (hun == 0) {
				if (ten == 0)
					return res;
				else {
					i = ten * one;
					res++;
				}
			}
			else {
				i = hun * ten * one;
				res++;
			}
		}
		else {
			i = tho * hun * ten * one;
			res++;
		}
	}
}
void output(int* gozip, int start, int end, int n, int num) {
	printf("고집수가 %d인 숫자 출력\n", n);
	for (int i = start; i <= end; i++) {
		if (gozip[i] == 0);
		else
			printf("%d\n", gozip[i]);
	}
	printf("총 개수 : %d개\n", num);
}