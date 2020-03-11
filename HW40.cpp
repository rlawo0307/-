#include<stdio.h>
int main() {
	int res, money, bread, snack, coke;
	while (1) {
		printf("현재 당신의 소유 금액 입력 : ");
		res = scanf("%d", &money);
		if (res != 1)
			break;
		else {
			for (bread = 1; bread <= money / 500; bread++)
				for (snack = 1; snack <= money / 700; snack++)
					for (coke = 1; coke <= money / 400; coke++)
						if (money - (bread * 500 + snack * 700 + coke * 400) == 0)
							printf("크림빵(%d 개), 새우깡(%d 봉지), 콜라(%d 병)\n", bread, snack, coke);
		}
		printf("어떻게 구입하시겠습니까?\n");
	}
	return 0;
}