#include <stdio.h>

	int main(void) {
    
	int i, n, sum = 0, score = 0;
	double avg;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
	// i를 1로 초기화; i가 입력 값보다 작거나 같다; 1씩 후치증가

		scanf("%d", &score); // 입력 값 스코어
		sum += score; // sum 변수에 스코어를 덧셈 후 대입
	}

	avg = (double)sum / n; // 부동소수점 변환 sum 나누기 입력 값 = avg
	printf("avg : %.1f \n", avg);

	if (avg >= 80.0f) { // avg가 80보다 작거나 같을 경우 패스 출력
		printf("pass");
	}
	else {
		printf("fail"); // 그렇지 않을 경우 fail 출력
		return 0;
	}
}
