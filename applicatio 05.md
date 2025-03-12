#include <stdio.h>

int main(void) {

	double hd, cd;
	double yd = 91.44;

	printf("yard? ");
	scanf("%lf", &hd);

	cd = hd * yd;

	printf("%.1fyard = %.1fcm \n", hd, cd);

	return 0;
}
