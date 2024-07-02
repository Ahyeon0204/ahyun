#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n;
	int num = 0, beforenum = 1, nextnum;

	printf("숫자를 입력하시오 : ");
	scanf("%d", &n);

	

		if (n == 0) printf("1 번째 피보나치 수 : 0");
		else if (n == 1) printf("2 번째 피보나치 수 : 1"); //첫번째 경우와 두번째 경우는 따로 설정
		else {
			for (int i = 1; i < n - 1; i++) {
				nextnum = num + beforenum; //이전 숫자와 현재 숫자의 합을 다음 숫자로 저장하기.
				num = beforenum; //이전숫자는 현재 숫자
				beforenum = nextnum; //이때 다음 숫자가 이전 숫자가 되면서 계속 반복
		}
	}	printf("%d번째 피보나치 수 : %d", n, nextnum);
}