#include <stdio.h>
void main()
{
	int num;
	double fact = 1;
	printf("Введите число\n");
	scanf("%i", &num);
	for (int i = 1; i <= num; i++)
	{
		fact = fact*i;
	}
	printf("%i!=%.0lf\n", num, fact);
}