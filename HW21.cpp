#include<stdio.h>
int main() {
	int i=1;
	double data[5], sum=0;
	while (i <= 5) {
		printf("- %d �� �л��� Ű��? ", i);
		scanf("%lf", &data[i-1]);
		sum += data[i-1];
		i++;
	}
	printf("�ټ� ���� ��� Ű�� %.1lf", sum / 5);
	return 0;
}