#include<stdio.h>
int main() {
	int money = 278970;
	int count_50000 = 5;
	int count_10000, count_5000, count_1000, count_500, count_100, count_50, count_10;

	money -= 50000 * count_50000;
	count_10000 = money / 10000;

	money -= 10000 * count_10000;
	count_5000 = money / 5000;

	money -= 5000 * count_5000;
	count_1000 = money / 1000;

	money -= 1000 * count_1000;
	count_500 = money / 500;

	money -= 500 * count_500;
	count_100 = money / 100;

	money -= 100 * count_100;
	count_50 = money / 50;

	money -= 50 * count_50;
	count_10 = money / 10;

	printf("50000���� => %d��\n10000���� => %d��\n5000���� =>%d��\n1000���� => %d��\n500���� => %d��\n100���� => %d��\n50���� => %d��\n10���� => %d��\n", count_50000, count_10000, count_5000, count_1000, count_500, count_100, count_50, count_10);
	return 0;
}