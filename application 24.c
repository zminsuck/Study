#include <stdio.h>

int main(void) {
  
	int i, sum = 0;
	int n = 0, s = 0;
	double avg;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
	//i에 1대입; i보다 n이 크거나 같다; i 후치증가
		scanf("%d", &s); // 입력 값 s
		sum += s; // s 입력 값 sum에 대입
	}

	avg = (double)sum / n;
	// avg = (부동소수점 더블 형변환)sum(합계) / 입력 값 n 나누기
	printf("%.2f", avg); // 소수점 두번째 자리까지 출력
}
