#include <stdio.h>

int main() {

	int num = 0, cnt = 0; // num = 입력 값, cnt = 개수

	while (1) { // 조건이 참일 경우 무한 반복

		scanf("%d", &num); // num으로 입력 값 설정

		if (num == 0) break; // 입력 값이 0과 같다면 멈춘다
		if (num % 3 == 0 || num % 5 == 0) {
		// 입력 값의 3에 배수는 0과 같다 또는 입력 값에 5의 배수는 0과 같다
		}
		else // 그렇지 않으면 cnt (개수)를 1씩 증가 시킨다
			cnt++;
	}

	printf("%d", cnt); // cnt (개수)를 출력
	return 0;
}
