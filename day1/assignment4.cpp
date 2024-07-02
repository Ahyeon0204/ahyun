#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	printf("input Arithmetic Operation\n\n");

	float num1 = 0, num2 = 0, result = 1;
	char operate;
	printf("ex)	3.4 * 8.5\n");
	printf("	2.9 - 5.4\n");
	printf("	3.9 * 8.0\n");
	printf("	3.9 ^ 8\n\n");

	printf("input : ");
	scanf("%f %c %f", &num1, &operate, &num2);

	switch (operate) {
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 + num2;
		break;
	case '/':
		if (num2 == 0)
			printf("계산할 수 없습니다."); break;
		result = num1 / num2;
		break;
	case '^':
		for (float i = 0; i < num2; i++)
			result *= num1; //거듭제곱 구하기
		break;
	default:
		printf("다시 입력하세요");
	}

	printf("%.2f %c %.2f = %.2f", num1, operate, num2, result);
}