#include <stdio.h>
int main() {
	double dis, speed_per, sec, time;
	int hour, min;
	printf("�Ÿ��� �Է��Ͻÿ�(km����) : ");
	scanf("%lf", &dis);
	printf("�ü��� �Է��Ͻÿ�(km/h����) : ");
	scanf("%lf", &speed_per);

	time = (dis / speed_per) * 60 * 60;
	hour = (int)time / (60 * 60);
	time -= hour * (60 * 60);

	min = (int)time / 60;
	time -= min * 60;

	sec = time;

	printf("%.2lf km => %d�ð� %d�� %.3lf�� �ҿ��", dis, hour, min, sec);
	return 0;
}