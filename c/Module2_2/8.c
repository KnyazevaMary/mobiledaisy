#include <stdio.h>
#include <math.h> //необходимо вводить -lm при компиляции

void main()
{
	const double g = 9.81;
	double v, alpha, time;
	printf("Введите скорость броска\nv=");
	scanf("%lf", &v);
	printf("Введите угол броска в радианах\nalpha=");
	scanf("%lf", &alpha);
	time = 2 * v*sin(alpha) / g;
	printf("Время полёта камня t=%.3lf с\n", time);
}