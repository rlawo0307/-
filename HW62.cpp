#include<stdio.h>
void cal(int (*)[4], int(*)[4], int(*)[4]);
void print(int(*)[4], int(*)[4], int(*)[4]);
int main() {
	int A[4][4] = { {0, 1, 2, 3},{1, -2, 1, 2},{2, 5, -3, 2},{0, -3, 1, 4} };
	int B[4][4] = { {1, -1, 2, 0},{1, -1, 1, 2}, {-1, 0, 3, 1}, {2, -1, 2, 8} };
	int C[4][4];
	cal(A, B, C);
	print(A, B, C);
	return 0;
}
void cal(int(*A)[4], int(*B)[4], int(*C)[4]) {
	for(int j=0; j<4; j++)
		for(int k=0; k<4; k++)
			C[j][k] = A[j][0] * B[0][k] + A[j][1] * B[1][k] + A[j][2] * B[2][k] + A[j][3] * B[3][k];
}
void print(int(*A)[4], int(*B)[4], int(*C)[4]) {
	printf("[Matrix A]\t[MAtrix B]\t[C = A * B]\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
			printf("%3d", A[i][j]);
		printf("\t");
		for (int j = 0; j < 4; j++)
			printf("%3d", B[i][j]);
		printf("\t");
		for (int j = 0; j < 4; j++)
			printf("%3d", C[i][j]);
		printf("\n");
	}
}