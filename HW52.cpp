#include<stdio.h>
void swap(int*, int);
int main() {
	int ary[] = { 1,2,3,4,5, 6, 7, 8, 9 }, num;
	num = sizeof(ary) / sizeof(int);
	printf("처음 배열에 저장된 값 : ");
	for(int i=0; i<num; i++)
		printf("%d", ary[i]);
	printf("\n");
	swap(ary, num);
	printf("바뀐 배열에 저장된 값 : ");
	for (int i = 0; i < num; i++)
		printf("%d", ary[i]);
	printf("\n");
	return 0;
}
void swap(int *ary, int num) {
	int tmp;
	for (int i = 0; i < (num / 2); i++) {
		tmp = ary[i];
		ary[i] = ary[num-i-1];
		ary[num-i-1] = tmp;
	}
}