#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n;
	int num = 0, beforenum = 1, nextnum;

	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf("%d", &n);

	

		if (n == 0) printf("1 ��° �Ǻ���ġ �� : 0");
		else if (n == 1) printf("2 ��° �Ǻ���ġ �� : 1"); //ù��° ���� �ι�° ���� ���� ����
		else {
			for (int i = 1; i < n - 1; i++) {
				nextnum = num + beforenum; //���� ���ڿ� ���� ������ ���� ���� ���ڷ� �����ϱ�.
				num = beforenum; //�������ڴ� ���� ����
				beforenum = nextnum; //�̶� ���� ���ڰ� ���� ���ڰ� �Ǹ鼭 ��� �ݺ�
		}
	}	printf("%d��° �Ǻ���ġ �� : %d", n, nextnum);
}