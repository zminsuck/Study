#include <stdio.h>

int main(void) {

    int num = 0, a = 0, sum = 0; // num (입력), a (개수), sum (합계)
	double avg; // avg (평균)

	while (1)
	{
		scanf("%d", &num); // num을 입력 값으로 지정

		if ((0 > num) || (num > 100)) {
		// 0이 num보다 크다 또는 num이 100보다 작다
			break; // 거짓 일 경우 조건식에서 벗어남
		}

		sum += num; // num의 값을 sum의 변수에 대입 후 계산
		a++; // 계산식이 반복 될때마다 개수 1씩 증가
	}
	avg = (double)sum / a; 
	// avg 변수 = 부동소수점 변수 더블로 sum(합계) 형변환 나누기 a (개수)
	printf("sum : %d \n", sum);  // sum (합계) 출력
	printf("avg : %.1f", avg); // avg (평균) 출력 [소수점 첫 번째]

	return 0;
}
