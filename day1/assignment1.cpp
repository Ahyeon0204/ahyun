#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	float num;
	float max = 0, min = 1000000;
	float sum = 0;

	for (int i = 1; i < 6; i++) {
		printf("%d 번째 숫자를 입력하시오. ", i);
		scanf("%f", &num);

		sum = sum + num;

		if (max < num)
			max = num;

		if (min > num)
			min = num;

	}

	printf("---- 결과 ----\n");
	printf("평균은 %f입니다.\n", sum / 5.0);
	printf("최대값은 %f입니다.\n", max);
	printf("최소값은 %f입니다.\n", min);
}