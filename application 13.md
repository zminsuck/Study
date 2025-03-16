#include <stdio.h>

int main(void) {

	int year;

	scanf("%d", &year);

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		// year 4로 나누어 떨어지고 year 100으로 나누어 떨어지지 않거나 400으로 떨어지면
		// 이라는 코드를 구축
	{
		printf("leap year");
	}
	else {
		printf("common year");
	}
}
