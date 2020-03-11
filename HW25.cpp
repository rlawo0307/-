#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void myfflush();
int random(int);
int input();
void output(int, int);
int main() {
	int rand, num, snum=0, bnum=100, i=1;
	rand = random(100);
	num = input();
	while (num != rand) {
		if (num < rand)
			if (num > snum)
				snum = num;
		if (num > rand)
			if (num < bnum)
				bnum = num;
		output(snum, bnum);
		i++;
		num = input();
	}
	printf("우와~ 맞았당~~~ 추카추카~~ %d 번째 만에 맞추셨습니다.\n", i);
	return 0;
}
void myfflush() {
	while (getchar() != '\n')
		;
}
int random(int n) {
	int res;
	res = rand() % n;
	return res;
}
int input() {
	int num, res;
	printf("# 숫자를 입력하시오 : ");
	res = scanf("%d", &num);
	while ((num < 1) || (num > 100) || (res != 1)) {
		myfflush();
		printf("# 숫자를 입력하시오 : ");
		res = scanf("%d", &num);
	}
	return num;
}
void output(int snum, int bnum) {
	printf("%d보다는 크고 %d보다는 작습니다.\n", snum, bnum);
}