#include<stdio.h>
int main() {
	int i=1;
	double data[5], sum=0;
	while (i <= 5) {
		printf("- %d 번 학생의 키는? ", i);
		scanf("%lf", &data[i-1]);
		sum += data[i-1];
		i++;
	}
	printf("다섯 명의 평균 키는 %.1lf", sum / 5);
	return 0;
}