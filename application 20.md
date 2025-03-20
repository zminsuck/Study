#include <stdio.h>

int main() {

	int b = 0, h = 0;
	char a;

	while (1)
	{
		printf("Base = ");
		scanf("%d", &b);

		printf("Height = ");
		scanf("%d", &h);

		printf("Triangle width = %.1f \n", (b * h)* 0.5f);
		printf("Continue? ");
		scanf(" %c", &a);

		if (a == 'y' || a == 'Y')
		{
			continue;
		}
		else
		{
			break;
		}
	}

	return 0;
}
