#include<stdio.h>
#include<string.h>
int main(){
	char name[100], gender, tmp; //tmp�� Ű�� �Է¹ް� �������� '\n'�� ���� �������
	double height;
	int len;

	printf("# ���� �Է� : ");
	fgets(name, 100, stdin);
	len = strlen(name);
	name[len - 1] = '\0';

	printf("# Ű �Է�(cm����) : ");
	scanf("%lf%c", &height, &tmp); //���๮�ڸ� tmp�� �����ؼ� ���۸� �����ش�
	
	printf("# �����Է�(M/F) : ");
	scanf("%c", &gender);
	if (gender == 'M')
		printf("%s���� Ű�� %.2lfcm�̰� �����Դϴ�\n", name, height);
	else
		printf("%s���� Ű�� %.2lfcm�̰� �����Դϴ�\n", name, height);
    return 0;
}