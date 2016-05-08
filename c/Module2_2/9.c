#include <stdio.h>

void main()
{
	int num, sum=0, amount=0;
	float average;
	printf("Введите число\n");
	scanf("%i", &num);
	do 
	{
		sum = sum + num % 10;
		amount++;
		num = num / 10;
	} while (num != 0);
	average =(float)sum / (float)amount;
	printf("Количество цифр в числе: \n%i\nСумма цифр: \n%i\nСреднее значение цифр: \n%.3f\n", amount, sum, average);
}