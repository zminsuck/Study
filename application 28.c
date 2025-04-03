#include <stdio.h>

	int main() {
    
		int i, j;
		int n = 0, s = 0;

		scanf("%d %d", &n, &s);

		for (i = 1; i <= n; i++) { // 다중 for문 조건에 맞게 반복
			for (j = 1; j <= s; j++) { // i 반복문이 1번 반복 할때마다 5번 실행
				printf("%d ", i * j);
			}
			printf("\n");
		}
		return 0;
	}
