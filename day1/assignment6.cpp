#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n, i, j;

	printf("���� �Է��Ͻÿ�. ");
	scanf("%d", &n);

	for (i = 1; i < n; i++)
	{
		for (j = 1; j < n * 2 - 1; j++)
		{
			// �ﰢ�� �׵θ�
			if ((j == (n + 1) - i) || (j == (n - 1) + i) && (i != n) || (i == n)) printf("*");
			else printf(" ");
		}
		printf("\n");
	}

	//�� �ﰢ���� �ٴ� �κ�
	for (int floor = 0; floor < 2 * n - 1; floor++)
			printf("*");
}