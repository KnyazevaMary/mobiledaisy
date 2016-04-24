#include <stdio.h>
int main (void)
{
	float a, b, sum, dif, pr, d;
	printf("Введите два целых числа\n");
	scanf("%f", &a);
	scanf("%f", &b);
	sum=a+b;
	dif=a-b;
	pr=a*b;
	d=a/b;
	printf("Сумма\n%.0f\nРазность\n%.0f\nПроизведение\n%.0f\nЧастное\n%f\n", sum, dif, pr, d);
}