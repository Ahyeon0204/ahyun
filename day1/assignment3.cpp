#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int year, leapYear;

	printf("������ �Է��Ͻÿ�. ");
	scanf("%d", &year);

	leapYear = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);

	if (leapYear == 1) printf("����");
}