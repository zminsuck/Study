#include <stdio.h>

int main(void)
{
	int i = 0, n = 0, sum = 0;

	scanf("%d", &n);
	for (i = n; i <= 100; i++) {
	// i를 입력값으로 초기화; 입력 값 보다 100이 크거나 같다; 입력 값에서 1씩 후치 증가
		sum += i; // sum(합계)에 입력값을 조건에 맞게 누적
	}
	printf("%d", sum);
	return 0;
}
