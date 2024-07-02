#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n, i, j;

	printf("값을 입력하시오. ");
	scanf("%d", &n);

	for (i = 1; i < n; i++)
	{
		for (j = 1; j < n * 2 - 1; j++)
		{
			// 삼각형 테두리
			if ((j == (n + 1) - i) || (j == (n - 1) + i) && (i != n) || (i == n)) printf("*");
			else printf(" ");
		}
		printf("\n");
	}

	//빈 삼각형의 바닥 부분
	for (int floor = 0; floor < 2 * n - 1; floor++)
			printf("*");
}