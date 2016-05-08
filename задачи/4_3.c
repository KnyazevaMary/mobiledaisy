#include <stdio.h>

int swap(int a_in, int b_in, int *a_out, int *b_out)
{
	*a_out = (int)b_in;
	*b_out = (int)a_in;
	return(0);
}

int main()
{
	int a, b;
	printf("Enter two integers\na=");
	scanf_s("%i", &a);
	printf("b=");
	scanf_s("%i", &b);
	if (b > a)
	{			
		swap(a, b, &a, &b);
	}
	while (a%b!=0)
	{
		a = a%b;
		swap(a, b, &a, &b);
	}
	printf("The greatest common divisor is %i\n", b);
}

