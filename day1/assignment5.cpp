#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n;

	printf("값을 입력하시오. ");
	scanf("%d", &n);

	for (int i = 0; i < n-1; i++) //열
	{
		//n을 기준으로 대칭, 열에 따라서 *개수 정하기
		for (int j = 0; j <= i; j++) 
			printf("*");
		for (int j = n; j > i + 1; j--)
			printf(" ");
		for (int j = n; j > i + 1; j--)
			printf(" ");
		for (int j = 0; j <= i; j++)
			printf("*");

		printf("\n");
	}

	for (int i = 0; i <= n; i++)
	{
		for (int j = n; j > i; j--)
			printf("*");
		for (int j = 0; j < i; j++)
			printf(" ");
		for (int j = 0; j < i; j++)
			printf(" ");
		for (int j = n; j > i; j--)
			printf("*");

		printf("\n");
	}
}