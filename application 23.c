#include <stdio.h>

int main(void) {
  
	int i, n;
	int sum = 0;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
	// i에 1대입; i가 n보다 작거나 같다; i 후치증가
		if (i % 5 == 0) { // 5의 배수
			sum += i; // i 값을 sum 값에 누적
		}
	}
	printf("%d ", sum);
	return 0;
}
