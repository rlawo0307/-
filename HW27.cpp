#include<stdio.h>
int input();
int main() {
	int weight, num = 0;
	while (num < 10) {
		weight = input(); 
		if (weight < 150) {
			printf("* ���߸��� ������ �峭���� ���ÿ�~^^\n");
		}
		else if (weight > 500) {
			printf("* Ÿ���� ������ �峭���� ���ÿ�~^^\n");
		}
		else {
			num++;
			printf("���� �ް��� �� : %d\n", num);
		}
	}
	printf("\n\n*** �ް� ������ �������ϴ�.\n");
	return 0;
}
int input() {
	int weight;
	printf("# ����� ���Ը� �Է��ϼ���(���� : g) : ");
	if (scanf("%d", &weight) != 1)
		input();
	return weight;
}
