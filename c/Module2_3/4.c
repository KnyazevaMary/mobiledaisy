#include <stdio.h>
#include <math.h> //необходимо вводить -lm при компиляции

void main() 
{
	double a, b, c, dsqr, x, d;
	printf("Введите коэффициенты квадратного уравнения вида a*x^2+b*x+c=0\na=");
	scanf("%lf", &a);
	printf("b=");
	scanf("%lf", &b);
	printf("c=");
	scanf("%lf", &c);
	x = -b / (2 * a);
	dsqr = (pow(b, 2) - 4 * a*c) / (4 * pow(a, 2));
	if (dsqr>0)
	{
		d = sqrt(dsqr);
		printf("x1=%.3lf\n", (x + d));
		printf("x2=%.3lf\n", (x - d));
	} 
	else if (dsqr==0)
		printf("x=%.3lf\n", x);
	else
	{
		d = sqrt(-dsqr);
		printf("x1=%.3lf + i %.3lf\n", x, d);
		printf("x2=%.3lf - i %.3lf\n", x, d);
	}
}