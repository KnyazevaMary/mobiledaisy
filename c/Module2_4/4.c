#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

#define max(a, b) ((a) > (b) ? (a) : (b))

void rand_max(int m)
{
	int a, c, x[m/2];
	srand((int)time(NULL));

	a = (rand() % 628) % (m - 1) + 1;
	c = (rand() % 924) % (m - 1) + 1;
	x[0] = (rand() % 567) % m;

	for (int i = 1; i < m / 2; i++) 
	{
		x[i] = (a*x[i-1] + c) % (m - 1);
		if (i % 2)
			printf("%4i     %4i   %4i\n", x[i-1], x[i], max(x[i-1], x[i]));
	}
		printf("\n");
}

void main()
{	
	int N;
	printf("Введите число сравнений\n");
	scanf("%i", &N);
	printf("Num №1 | Num №2 | Max\n");
	assert(N > 0);
	rand_max(4*N);
}