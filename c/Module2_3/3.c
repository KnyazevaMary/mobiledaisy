#include <stdio.h>

void swap(int a_in, int b_in, int *a_out, int *b_out)
{
	*a_out = (int)b_in;
	*b_out = (int)a_in;
}

void main()
{
	int a, b;
	printf("Введите два целых числа\na=");
	scanf("%i", &a);
	printf("b=");
	scanf("%i", &b);
	if (b > a)
	{			
		swap(a, b, &a, &b);
	}
	while (a%b!=0)
	{
		a = a%b;
		swap(a, b, &a, &b);
	}
	printf("Наибольший общий делитель %i\n", b);
}

