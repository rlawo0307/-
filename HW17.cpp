#include<stdio.h>
#include<string.h>
int main(){
	char name[100], gender, tmp; //tmp는 키를 입력받고 난다음의 '\n'를 위한 저장공간
	double height;
	int len;

	printf("# 성명 입력 : ");
	fgets(name, 100, stdin);
	len = strlen(name);
	name[len - 1] = '\0';

	printf("# 키 입력(cm단위) : ");
	scanf("%lf%c", &height, &tmp); //개행문자를 tmp에 저장해서 버퍼를 비위준다
	
	printf("# 성별입력(M/F) : ");
	scanf("%c", &gender);
	if (gender == 'M')
		printf("%s씨의 키는 %.2lfcm이고 남성입니다\n", name, height);
	else
		printf("%s씨의 키는 %.2lfcm이고 여성입니다\n", name, height);
    return 0;
}