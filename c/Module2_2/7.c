#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int a, c, m, x;
	srand((int)time(NULL));
	printf("Введите длину последовательности (m>=2)\nm=");
	scanf("%i", &m);
	m;
	x = ((rand() % 136) % (rand() % 267)) % m;
	a = ((rand() % 428) % (rand() % 185)) % (m - 1) + 1;
	c = ((rand() % 924) % (rand() % 421)) % (m - 1) + 1;
	printf("%4i", x);
	for (int i = 1; i < m; i++) 
	{
		x = (a*x + c) % m;
		printf("%4i", x);
	}
	printf("\n");
}