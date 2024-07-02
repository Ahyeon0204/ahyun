#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n, r;
	printf("n을 입력하시오 : ");
	scanf("%d", &n);
	printf("r을 입력하시오 : ");
	scanf("%d", &r);

	//순열
	int P = 1;
	
	if (r == 0 || n < r) {
		printf("순열 : 오류\n");
	}
	else
	{
		for (int i = n; i >= n - r + 1; i--)
		{
			P *= i;
		}

		printf("순열 : %d\n", P);
	}
	

	//중복순열
	int PR = 1;

	if (r == 0) printf("중복순열 : 1\n");
	else {
		for (int i = 0; i < r; i++) 
			PR *= n;
		printf("중복순열 : %d\n", PR);
	}

	//조합

	int C1 = 1, C2 = 1;

	if (r == 0 || n < r) {
		printf("조합 : 오류\n");
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

		printf("조합 : %d\n", C1 / C2);
	}

	//중복조합

	int H1 = 1, H2 = 1, H3 = 1;
	if (r == 0 || n < r) {
		printf("중복조합 : 오류\n");
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
		printf("중복조합 : %d\n", H1 / (H2 * H3));
	}
}