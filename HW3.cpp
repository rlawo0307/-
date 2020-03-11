#include<stdio.h>
int main() {
	int time = 54321;
	int hour, min, sec;

	hour = time / (60 * 60);
	time = time % (60 * 60);

	min = time / 60;
	time = time % 60;

	sec = time;

	printf("54321초는 %d시간 %d분 %d초 입니다.", hour, min, sec);
	return 0;
}