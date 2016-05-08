#include <stdio.h>
int main()
{
	int num;
	double fact = 1;
	printf("Enter the number\n");
	scanf_s("%i", &num);
	for (int i = 1; i <= num; i++)
	{
		fact = fact*i;
	}
	printf("%i!=%.0lf\n", num, fact);
	return(0);
}