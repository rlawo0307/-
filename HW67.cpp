#include<stdio.h>
#include<malloc.h>
int* myAlloc(int);
void myDelete(int*);
int main() {
	int n, a, sep[1000] = { 0 }, num = 0;
	int* ip;
	while (1) {
		printf("* 입력할 숫자의 개수 : ");
		if (scanf("%d", &n) != 1)
			break;
		ip = myAlloc(n);
		printf("* 숫자 입력 : ");
		for (int i = 0; i < n; i++) {
			scanf("%d", ip + i);
			a = ip[i] % 1000;
			sep[a - 1] = a;
		}
		for (int i = 0; i < 1000; i++)
			if (sep[i] == 0);
			else
				num++;
		printf("서로 다른 수의 개수 : %d\n", num);
		printf("\n");
		myDelete(ip);
		num = 0;
		for (int i = 0; i < 1000; i++)
			sep[i] = 0;
	}
	return 0;
}
int* myAlloc(int n) {
	int* ip;
	ip = (int*)malloc(sizeof(int)*n);
	return ip;
}
void myDelete(int* ip) {
	free(ip);
}