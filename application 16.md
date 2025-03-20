#include <stdio.h>

int main() {

    int a = 0;

	scanf("%d", &a); // a를 입력 받음

    for (int b = 1; b <= a; b++) { 
	// 변수 b로 초기화 1을 대입; b는 a보다 크거나 같다; 조건식이 참일 경우 후치 증가 반복
      printf("%d ", b);
    }

    return 0;
  }
