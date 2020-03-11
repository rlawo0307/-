#include<stdio.h>
void printAge(int);
void printHeight(double);
int main() {
	char name[20] = "±èÁöÇı";
	int age = 500;
	double height = 170.8;

	printf("¼º¸í : %s\n", name);
	printAge(age);
	printHeight(height);

	return 0;
}

void printAge(int age) {
	printf("%d\n", age);
}
void printHeight(double height) {
	printf("%f", height);
}