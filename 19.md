#include <stdio.h>

int main(void) {

	int a, b, c, d, sum;
	double avg;

	scanf("%d %d %d %d", &a, &b, &c, &d);

	sum = a + b + c + d;
	avg = sum / 4.0f;

	printf("sum %d \n", sum);
	printf("avg %.0f \n", avg);

	return 0;

}
