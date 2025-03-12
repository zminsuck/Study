#include <stdio.h>

int main(void) {

	int a, b, c, sum;

	printf("세 개의 정수를 입력: ");
	scanf("%d %d %d", &a, &b, &c);
	sum = a + b + c;

	printf("sum = %d \n", sum);

	return 0;

}
