#include <stdio.h>
#include <math.h>

int main()
{
	const double g = 9.81;
	double v, alpha, time;
	printf("Enter the velocity of the throw\nv=");
	scanf_s("%lf", &v);
	printf("Enter the angle of the throw in radians\nalpha=");
	scanf_s("%lf", &alpha);
	time = 2 * v*sin(alpha) / g;
	printf("Stone's flight time t=%.3lf s\n", time);
}