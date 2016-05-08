#include <stdio.h>
#include <math.h>  //необходимо вводить -lm при компиляции

void filling(double *x, double *y)
{
	scanf("%lf", &*x);
	scanf("%lf", &*y);
}

void main()
{
	double a[2], b[2], c[2];
	printf("Введите координаты точек \nТочка A\n");
	filling(&a[0], &a[1]);
	printf("Точка B\n");
	filling(&b[0], &b[1]);
	printf("Точка C\n");
	filling(&c[0], &c[1]);

	double l[3];

	l[0] = pow((b[0] - a[0]), 2) + pow((b[1] - a[1]), 2);
	l[1] = pow((c[0] - a[0]), 2) + pow((c[1] - a[1]), 2);
	l[2] = pow((c[0] - b[0]), 2) + pow((c[1] - b[1]), 2);
	
	if ((l[0] == l[1] + l[2]) || (l[1] == l[0] + l[2]) || (l[2] == l[0] + l[1]))
		printf("Треугольник является прямоугольным\n");
	else
		printf("Треугольник не является прямоугольным\n");
}