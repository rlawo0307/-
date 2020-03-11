#include <stdio.h>
int main() {
	int his_sc, lit_sc, ent_sc, sum;
	double mean;

	printf("역사, 문학, 예능 점수를 입력하세요 : ");
	scanf("%d%d%d", &his_sc, &lit_sc, &ent_sc);

	sum = his_sc + lit_sc + ent_sc;
	mean = sum / 3.0;

	printf("총점은 %d 이고 평균은 %.2lf입니다.", sum, mean);
	return 0;
}