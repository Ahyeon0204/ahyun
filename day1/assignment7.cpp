#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n, r;
	printf("n�� �Է��Ͻÿ� : ");
	scanf("%d", &n);
	printf("r�� �Է��Ͻÿ� : ");
	scanf("%d", &r);

	//����
	int P = 1;
	
	if (r == 0 || n < r) {
		printf("���� : ����\n");
	}
	else
	{
		for (int i = n; i >= n - r + 1; i--)
		{
			P *= i;
		}

		printf("���� : %d\n", P);
	}
	

	//�ߺ�����
	int PR = 1;

	if (r == 0) printf("�ߺ����� : 1\n");
	else {
		for (int i = 0; i < r; i++) 
			PR *= n;
		printf("�ߺ����� : %d\n", PR);
	}

	//����

	int C1 = 1, C2 = 1;

	if (r == 0 || n < r) {
		printf("���� : ����\n");
	}
	else
	{
		for (int i = n; i > n - r; i--)
		{
			C1 *= i;
		}
		for (int i = 1; i <= r; i++)
		{
			C2 *= i;
		}

		printf("���� : %d\n", C1 / C2);
	}

	//�ߺ�����

	int H1 = 1, H2 = 1, H3 = 1;
	if (r == 0 || n < r) {
		printf("�ߺ����� : ����\n");
	}
	else
	{
		for (int i = 1; i <= n + r - 1; i++)
		{
			H1 *= i;
		}
		for (int i = 1; i <= n - 1; i++)
		{
			H2 *= i;
		}
		for (int i = 1; i <= r; i++)
			H3 *= i;
		printf("�ߺ����� : %d\n", H1 / (H2 * H3));
	}
}