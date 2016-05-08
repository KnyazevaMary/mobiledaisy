#include <stdio.h>
#include <math.h>

void filling(double *x, double *y)
{
	scanf_s("%lf", &*x);
	scanf_s("%lf", &*y);
}

int main()
{
	double a[2], b[2], c[2];
	printf("Enter the points coordinates \nA point\n");
	filling(&a[0], &a[1]);
	printf("B point\n");
	filling(&b[0], &b[1]);
	printf("C point\n");
	filling(&c[0], &c[1]);

	double l[3];

	l[0] = pow((b[0] - a[0]), 2) + pow((b[1] - a[1]), 2);
	l[1] = pow((c[0] - a[0]), 2) + pow((c[1] - a[1]), 2);
	l[2] = pow((c[0] - b[0]), 2) + pow((c[1] - b[1]), 2);
	
	if ((l[0] == l[1] + l[2]) || (l[1] == l[0] + l[2]) || (l[2] == l[0] + l[1]))
	{
		printf("The triangle is rectangular\n");
	}
	else
	{
		printf("The triangle is not rectangular\n");
	}
}