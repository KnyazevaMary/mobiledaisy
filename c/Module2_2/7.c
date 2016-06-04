#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int a, c, m, x;
	srand((int)time(NULL));
	printf("Введите длину последовательности (m>=2)\nm=");
	scanf("%i", &m);
	x = (rand() % 567) % m;
	a = (rand() % 628) % (m - 1) + 1;
	c = (rand() % 924) % (m - 1) + 1;
	for (int i = 0; i < m; i++) 
	{
		printf("%4i", x);
		x = (a*x + c) % m;
	}
	printf("\n");
}