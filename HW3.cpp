#include<stdio.h>
int main() {
	int time = 54321;
	int hour, min, sec;

	hour = time / (60 * 60);
	time = time % (60 * 60);

	min = time / 60;
	time = time % 60;

	sec = time;

	printf("54321�ʴ� %d�ð� %d�� %d�� �Դϴ�.", hour, min, sec);
	return 0;
}