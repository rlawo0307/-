#include<stdio.h>
int input();
int cal(int);
void output(int, int);
int main() {
	int dep, date;
	dep = input();
	date = cal(dep);
	output(dep, date);
	return 0;
}
int input() {
	int dep;
	printf("* �칰�� ���̸� �Է��Ͻÿ�(cm����) : ");
	scanf("%d", &dep);
	return dep;
}
int cal(int dep) {
	int date=1;
	if(dep > 50)
		while ((dep - 30) > 50) {
			date++;
			dep -= 30;
		}
	date += 1;
	return date;
}
void output(int dep, int date) {
	double dep_m;
	dep_m = dep / 100;
	printf("%.2lf���� ������ �칰�� Ż���ϱ� ���ؼ��� %d���� �ɸ��ϴ�.\n", dep_m, date);
}