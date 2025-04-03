#include <stdio.h>

int main(void) {
	int i, j;

	for (i = 2; i <= 4; i++) { // i에 2를 초기화; 2 <= 4; i를 1씩 증가
		for (j = 1; j <= 5; j++) { // j에 1을 초기화; j 보다 5가 크거나 같다; 1씩 증가
			printf("%1d * %1d = %2d   ", i, j, j * i); // 출력
		}
		printf("\n");
	}
	return 0;
}
