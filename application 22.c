#include <stdio.h>

int main(void) {
  
	int i, n, t;

	scanf("%d %d", &n, &t);

	for (i = t; i <= n; i++) {
	// i에 입력 값 t를 대입; i가 n보다 작거나 같다; i 후치증가
		printf("%d", i);
	}
}
