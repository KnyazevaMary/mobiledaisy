#include <stdio.h>
#include <math.h> //необходимо вводить -lm при компиляции

int fibo(int n)
{
	if (n < 3)
		return(1);
	else
		return(fibo(n - 1) + fibo(n - 2));
}

void main()
{
	int N, length, k = 1;
	printf("Введите, сколько нужно первых чисел последовательности Фибоначчи\nN=");
	scanf("%i", &N);
	
	length = (int)pow(N, 0.5);

	if (N == length*length)
		k = 0;
	
	for (int i = 1; i <= N; i++)
	{
		printf("%6i", fibo(i));

		if ( !(i % (length + k))&&(i != N) )
		{
			printf("\n");
			printf("\n");
		}
	}
	printf("\n");
}