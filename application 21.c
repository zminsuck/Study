#include <stdio.h>

int main(void) {
  
	int i, n = 0; // i = (조건 값), n = (입력 값)

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
	// i를 1로 초기화; i보다 n 입력값이 크거나 같다 1씩 후치증가
		printf("JUNGOL \n"); // n번 출력
	}
	return 0;
}
