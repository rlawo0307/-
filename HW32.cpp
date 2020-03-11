#include<stdio.h>
char menu();
void myfflush();
int deposit(int);
int withdraw(int);
int inputInt(char*, int);
int main() {
	int bal=0;
	char mchar;
	printf("���� �ܾ��� %d���Դϴ�.\n\n\n", bal);
	while (1) {
		mchar = menu();
		if (mchar == 'q')
			break;
		switch (mchar)
		{
		case 'i': bal = deposit(bal); break;
		case 'o': bal = withdraw(bal); break;
		}
		myfflush();
		printf("\n\n");
	}
	return 0;
}
char menu() {
	char input;
	printf("# �޴��� �����Ͻÿ�(i-�Ա�, 0-���, q-����) : ");
	scanf("%c", &input);
	while ((input != 'i') && (input != 'o') && (input != 'q')) {
		printf("* �߸� �Է��ϼ̽��ϴ�.\n");
		myfflush();
		printf("\n# �޴��� �����Ͻÿ�(i-�Ա�, 0-���, q-����) : ");
		scanf("%c", &input);
	}
	return input;
}
void myfflush() {
	while (getchar() != '\n')
		;
}
int inputInt(char* str, int input) {
	printf("%s", str);
	while ((scanf("%d", &input) != 1) || (input < 0)) {
		printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ�. : ");
		myfflush();
	}
	return input;
}
int deposit(int bal) {
	int de=0;
	de = inputInt("# �Աݾ��� �Է��ϼ��� : ", de);
	bal += de;
	printf("* ���� �ܾ��� %d�� �Դϴ�.\n", bal);
	return bal;
}
int withdraw(int bal) {
	int wd=0;
	wd = inputInt("# ��ݾ��� �Է��ϼ��� : ", wd);
	if (wd > bal)
		printf("* �ܾ��� �����մϴ�.\n* ���� �ܾ��� %d�� �Դϴ�.\n", bal);
	else {
		bal -= wd;
		printf("* ���� �ܾ��� %d�� �Դϴ�.\n", bal);
	}
	return bal;
}