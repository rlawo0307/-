#include<stdio.h>
int main() {
	int res, money, bread, snack, coke;
	while (1) {
		printf("���� ����� ���� �ݾ� �Է� : ");
		res = scanf("%d", &money);
		if (res != 1)
			break;
		else {
			for (bread = 1; bread <= money / 500; bread++)
				for (snack = 1; snack <= money / 700; snack++)
					for (coke = 1; coke <= money / 400; coke++)
						if (money - (bread * 500 + snack * 700 + coke * 400) == 0)
							printf("ũ����(%d ��), �����(%d ����), �ݶ�(%d ��)\n", bread, snack, coke);
		}
		printf("��� �����Ͻðڽ��ϱ�?\n");
	}
	return 0;
}