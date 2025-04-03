#include <stdio.h>

int main(void) {
	int i, j;

	for (i = 1; i <= 5; i++)
	// 다중 for문이 참일 경우 끝날 때마다 1씩 증가
	{
		for (j = 1; j <= 5; j++) { // i가 1씩 증가 할때마다 5번씩 증가
			printf("%d", (i + j)); // i + j 값을 출력
		}
		printf("\n");
	}
	printf("\n");

	return 0;
}
