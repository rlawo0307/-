#include<stdio.h>
#include<string.h>
int main() {
	char fname[100], lname[100];
	int flen, llen;
	printf("#���� �Է��Ͻÿ� : ");
	scanf("%s", fname);
	printf("#�̸��� �Է��Ͻÿ� : ");
	scanf("%s", lname);
	flen = strlen(fname);
	llen = strlen(lname);
	printf("%s %s\n%*d %*d\n", fname, lname, flen, flen, llen, llen);
	return 0;	
}