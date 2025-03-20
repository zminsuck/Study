#include <stdio.h>

int main(void) {
	
	int num, a = 0, b = 0; // 입력 num, 변수 a, b = 0을 대입

	while (1) {

		scanf("%d", &num);

		if (num % 2 == 0 && num != 0) {
			// 입력 값의 2의 배수는 0과 같다 and 입력 값은 0이 아니다
			b++; // 참일 경우 1 후치증가
		}
		else if (num % 2 != 0 && num != 0) {
			// 입력 값의 2의 배수는 0이 아니다 and 입력 값은 0이 아니다
			a++; // 참일 경우 1 후치증가
		}
		else break; // 그렇지 않을 경우, 벗어나라
	}

	printf("odd : %d\n", a); // a = 홀수 출력
	printf("even : %d", b); // b = 짝수 출력
}
