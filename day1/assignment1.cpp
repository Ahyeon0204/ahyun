#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	float num;
	float max = 0, min = 1000000;
	float sum = 0;

	for (int i = 1; i < 6; i++) {
		printf("%d ��° ���ڸ� �Է��Ͻÿ�. ", i);
		scanf("%f", &num);

		sum = sum + num;

		if (max < num)
			max = num;

		if (min > num)
			min = num;

	}

	printf("---- ��� ----\n");
	printf("����� %f�Դϴ�.\n", sum / 5.0);
	printf("�ִ밪�� %f�Դϴ�.\n", max);
	printf("�ּҰ��� %f�Դϴ�.\n", min);
}