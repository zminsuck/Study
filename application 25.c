#include <stdio.h>

int main(void) {
  
	int i, n;
	int even = 0, odd = 0;


	for (i = 1; i <= 10; i++) {
	// i에 1대입; 1 보다 10이 크거나 같다; 1++
		scanf("%d", &n);

		if (n % 2 == 0) even++; // 배수(짝수) 조건 반복마다 1씩 증가
		if (n % 2 == 1) odd++; // 배수(홀수) 조건 반복마다 1씩 증가
	}
	printf("even : %d \n", even);
	printf("odd : %d", odd);

	return 0;
}
