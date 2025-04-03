#include <stdio.h>

int main(void) {
  
	int i, n, sum = 0; // i (조건식), n (입력 값), sum (합계)

	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
	// i를 1로 초기화; i가 n보다 크거나 같다; 조건이 참일 경우, i 후치 증가
		sum += i; // sum(합계)에 i값을 누적
	}
	printf("%d \n", sum);

	return 0;
}
