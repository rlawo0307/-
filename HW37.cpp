#include<stdio.h>
int main() {
	int i, j, k=1;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++, k++)
			if ((k % 3) == 0)
				printf("%3c", '*');
			else if ((k % 5) == 0)
				printf("%3c", '#');
			else if ((k % 15) == 0)
				printf("%3d", k);
			else
				printf("%3d", k);
		printf("\n");
	}
	return 0;
}