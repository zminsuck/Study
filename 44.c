#include <stdio.h>

int main(void) {
	int i, j; // i = 1 ~ 9, j = 2 ~ 4

	for (i = 1; i <= 9; i++) { // i에 1을 대입; 1 <= 9; i를 1씩 증가
		for (j = 2; j < 5; j++) { // j에 2을 초기화; j보다 5가 작다; j 1씩 증가
			printf("%d * %d = %2d   ", j, i, j * i); // 출력
		}
		printf("\n");
	}
	return 0;
}
