#include <stdio.h>

int factorial(int n)
{
	int r;
	for (r = 1; n > 1; r *= (n--))
		;
	return r;
}

void main()
{
	int height;
	printf("Введите высоту треугольника\n");
	scanf("%i", &height);
	height--;
	for (int n = 0; n <= height; n++)
	{
		for (int k = 0; k < 2 * (height - n) + (height - n) / 2; k++)
		{
			printf(" ");
		}
		for (int m = 0; m <= n; m++)
		{
			printf(" %3i ", (factorial(n) / (factorial(m)*factorial(n - m))));
		}
		printf("\n");
	}
}
