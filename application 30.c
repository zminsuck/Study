#include <stdio.h>

	int main(void) {
    
		int i, j; // 조건 변수
		int n = 0, k = 0; // 입력 변수

		scanf("%d %d", &n, &k); // 5 : 3, 3 : 5

		if (n > k) { // n이 k보다 클 경우 (조건) 실행
			for (i = 1; i <= 9; i++) {
				for (j = n; j >= k; j--) { // j를 n값으로 초기화; j보다 k가 크거나 같다; j값 후치 감소
					printf("(%d * %d) = %2d   ", j, i, (i * j));
				}
				printf("\n");
			}
		}
		else {
			for (i = 1; i <= 9; i++) {
				for (j = n; j <= k; j++) { // j를 n값으로 초기화; j가 k보다 크거나 같다; j값 후치 증가
					printf("(%d * %d) = %2d   ", j, i, (i * j));
				}
				printf("\n");
			}
		}
		return 0;
	}
