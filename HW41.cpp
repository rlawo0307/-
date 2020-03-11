#include<stdio.h>
int main() {
	int i, j, k=0, l=0;
	for (i = 0; i < 10; i++, l++) {
		for (j = 0; j < 10; j++, k += 10) {
			printf("%2d\t", l + k);
		}
		printf("\n");
		k = 0;
	}
	return 0;
}