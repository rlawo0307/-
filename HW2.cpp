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

	printf("50000원권 => %d개\n10000원권 => %d개\n5000원권 =>%d개\n1000원권 => %d개\n500원권 => %d개\n100원권 => %d개\n50원권 => %d개\n10원권 => %d개\n", count_50000, count_10000, count_5000, count_1000, count_500, count_100, count_50, count_10);
	return 0;
}