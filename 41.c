#include <stdio.h>

int main() {

	int num;
	int n3 = 0, n5 = 0;

	for (int i = 0; i < 10; i++) {
	// i를 0으로 초기화; i는 10보다 작다; 1씩 후치증가

		scanf("%d", &num);

		if (num % 3 == 0)
		{
				n3++;
		}

		if (num % 5 == 0) 
		{
				n5++;
		}
	}
	printf("Multiples of 3 : %d\n", n3);
	printf("Multiples of 5 : %d", n5);
}
