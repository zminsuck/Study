#include <stdio.h>

int main() {

	int n1, n2;
	int sum = 0, c = 0;

	scanf("%d %d", &n1, &n2); // 10 : 15

	for (int i = n1; i <= n2; i++) {
	// int 변수 i 지정 입력 값 n1 대입; i 보다 입력 값 n2가 크거나 같다; i 후치 증가
		if (i % 3 == 0 || i % 5 == 0) {
		// 조건문 i 나머지 3(배수) 또는 i 나머지 5(배수) 둘중 하나라도 참이면 참
			sum += i; // 반복마다 sum에 i 값을 누적
			c++; // 개수 1씩 증가
		}
	}

	double avg = (double)sum / c;
	printf("sum : %d\n", sum);
	printf("avg : %.1f", avg);
	return 0;
}
