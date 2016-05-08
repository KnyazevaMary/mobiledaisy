#include <stdio.h>

int main()
{
	int num, sum=0, amount=0;
	float average;
	printf("Enter the number\n");
	scanf_s("%li", &num);
	do 
	{
		sum = sum + num % 10;
		amount++;
		num = num / 10;
	} while (num != 0);
	average =(float)sum / (float)amount;
	printf("Amount of digits in the number\n%li\nDigits sum\n%li\nDigits average\n%.3f\n", amount, sum, average);
}