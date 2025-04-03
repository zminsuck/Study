#include <stdio.h>

int main(void) {
  
	int i, j, sum = 0;

	scanf("%d", &j);

	for (i = 1; i <= 10; i++) {
	// i에 1대입; 1 <= 10; 1++
			printf("%d ", j * i); // 입력 값  j * i 결과 출력
		}

	return 0;
	}
