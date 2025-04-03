#include <stdio.h>

	int main(void) {
    
		int i, j, t;

		scanf("%d", &t);

		for (i = 1; i <= t; i++) { // i에 1대입; i가 t보다 작거나 같다; 1++
			for (j = 1; j <= t; j++) { // 같은 조건으로 i for문 한번 실행 = j for문 5번 실행
				printf("(%d, %d) ", i, j, (i + j));
			}
			printf("\n");
		}
		return 0;
	}
