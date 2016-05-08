#include <stdio.h>

void main (void)
{
	float a, b;
	printf("Введите два целых числа\n");
	scanf("%f", &a);
	scanf("%f", &b);
	printf("Сумма\n%.0f\nРазность\n%.0f\nПроизведение\n%.0f\nЧастное\n%f\n", a+b, a-b, a*b, a/b);
}