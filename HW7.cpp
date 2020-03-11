#include <stdio.h>
int main() {
	double dis, speed_per, sec, time;
	int hour, min;
	printf("거리를 입력하시오(km단위) : ");
	scanf("%lf", &dis);
	printf("시속을 입력하시오(km/h단위) : ");
	scanf("%lf", &speed_per);

	time = (dis / speed_per) * 60 * 60;
	hour = (int)time / (60 * 60);
	time -= hour * (60 * 60);

	min = (int)time / 60;
	time -= min * 60;

	sec = time;

	printf("%.2lf km => %d시간 %d분 %.3lf초 소요됨", dis, hour, min, sec);
	return 0;
}