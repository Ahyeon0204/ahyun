#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n;

	printf("���� �Է��Ͻÿ�. ");
	scanf("%d", &n);

	for (int i = 0; i < n-1; i++) //��
	{
		//n�� �������� ��Ī, ���� ���� *���� ���ϱ�
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