#include <stdio.h>
int input();
int cal(int);
void output(int);
int main() {
	int sta, fee, i=1;

	while (i <= 5) {
		sta = input();
		fee = cal(sta);
		output(fee);
		i++;
	}
	return 0;
}
int input() {
	int sta;
	printf("역수를 입력하시오 : ");
	scanf("%d", &sta);
	return sta;
}
int cal(int sta) {
	int fee;
	if (sta < 11) {
		if (sta < 6)
			fee = 600;
		else
			fee = 800;
	}
	else
		fee = 800 + 100 * (((sta + 1) - 10) / 2);
	return fee;
}
void output(int fee) {
	printf("요금 : %d\n", fee);
}