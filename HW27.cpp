#include<stdio.h>
int input();
int main() {
	int weight, num = 0;
	while (num < 10) {
		weight = input(); 
		if (weight < 150) {
			printf("* 메추리알 가지고 장난하지 마시오~^^\n");
		}
		else if (weight > 500) {
			printf("* 타조알 가지고 장난하지 마시오~^^\n");
		}
		else {
			num++;
			printf("현재 달걀의 수 : %d\n", num);
		}
	}
	printf("\n\n*** 달걀 포장이 끝났습니다.\n");
	return 0;
}
int input() {
	int weight;
	printf("# 계란의 무게를 입력하세요(단위 : g) : ");
	if (scanf("%d", &weight) != 1)
		input();
	return weight;
}
