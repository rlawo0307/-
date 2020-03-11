#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define RESIDENT_NUMBER_LENGTH  13
int availabilityCheck(char *resident_number);
int checkLengthCharacter(char *resident_number);
int checkDate(char *resident_number);
int checkIdentification(char *resident_number);
int checkGender(char *resident_number);
int checkYear(int year);
int main()
{
	char resident_number[][20] = { "0402291000008", "870401102321", "00031541949179",
		"0003154194917", "801203#201122", "7804155328845", "7804150328840",
		"9612241068382", "9902292194322", "0230174326176", "8811391042219",
		"8100122042213", "8112002042213", "9210101069415", "0802294012345",
		"8806311069417","8807311069418" };
	int i, count;
	count = sizeof(resident_number) / sizeof(resident_number[0]);
	for (i = 0; i<count; i++){
		if (availabilityCheck(resident_number[i]) == TRUE)
			printf("(+) 주민번호%s는(은) 유효한 번호입니다.\n", resident_number[i]);
		else
			printf("(-) 주민번호%s는(은) 유효하지 않은 번호입니다.\n", resident_number[i]);
	}
	return 0;
}
int availabilityCheck(char* resident_number) {
	if (checkLengthCharacter(resident_number) == FALSE) return FALSE;
	if (checkIdentification(resident_number) == FALSE) return FALSE;
	if(checkGender(resident_number) == FALSE) return FALSE;
	if (checkDate(resident_number) == FALSE) return FALSE;
	return TRUE;
}
int checkLengthCharacter(char* resident_number) {
	int check;
	for (int i = 0; i < 20; i++)
		if (resident_number[i] == '\0') {
			check = i;
			break;
		}
	if (check != RESIDENT_NUMBER_LENGTH) return FALSE;
	for (int i = 0; i < RESIDENT_NUMBER_LENGTH; i++)
		if (resident_number[i] < 48 || resident_number[i] > 57) return FALSE;
	return TRUE;
}
int checkDate(char* resident_number) {
	int year, month, day, CL;
	if (resident_number[6] == 1 || resident_number[6] == 2)
		year = 1900 + (resident_number[0] - 48) * 10 + (resident_number[1] - 48);
	else year = 2000 + (resident_number[0] - 48) * 10 + (resident_number[1] - 48);
	month = (resident_number[2] - 48) * 10 + (resident_number[3] - 48);
	if (month < 1 || month > 12) return FALSE;
	day = (resident_number[4] - 48) * 10 + (resident_number[5] - 48);
	if (day < 1) return FALSE;
	CL = checkYear(year); 
	if (month == 2) {
		if (CL == TRUE) {
			if (day > 29) return FALSE;
		}
		else {
			if (day > 28) return FALSE;
		}
	}
	for (int i = 1; i <= 12; i += 2)
		if (day > 31) return FALSE;
	for (int i = 4; i <= 12; i += 2) {
		if (i = 8) {
			if (day > 31)
				return FALSE;
		}
		else
			if (day > 30) return FALSE;
	}
	return TRUE;
}
int checkGender(char* resident_number) {
	if (resident_number[6] >= 49 && resident_number[6] <= 52) return TRUE;
	else return FALSE;
}
int checkIdentification(char* resident_number) {
	int sum = 0;
	for (int i = 0; i < 12; i++)
		sum += resident_number[i] - 48;
	if (resident_number[12] == sum % 10)
		return TRUE;
	else
		return FALSE;
}
int checkYear(int year) {
	if (year % 4) return FALSE;
	else {
		if (year % 100) return TRUE;
		else {
			if (year % 400) return FALSE;
			else return TRUE;
		}
	}
}