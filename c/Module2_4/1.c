#include <stdio.h>
#include <stdlib.h>

double max(double a, double b) 
{
    return a >= b ? a : b;
}

double min(double a, double b) 
{
    return a <= b ? a : b;
}

void main()
{
	char *tonesRGB[] = { "красного","зелёного","синего" }, *tonesHSV[] = { "жёлтым и пурпурным","голубым и жёлтым","пурпурным и голубым" };
	double RGB[3], C[3], S, V, t;
	int k;
	
	for (int i = 0; i < 3; i++)
	{
		printf("Введите значение для %s цвета (0...1)\n", tonesRGB[i]);
		scanf("%lf", &RGB[i]);
	}

	printf("\n");

	V = max(RGB[0], RGB[1]);
	V = max(V, RGB[2]);
	
	t = min(RGB[0], RGB[1]);
	t = min(t, RGB[2]);

	if (V != 0)
		S = (V - t) / V;
	else
		S = 0;

	if (S != 0)
	{
		C[0] = (V - RGB[0]) / (V - t);
		C[1] = (V - RGB[1]) / (V - t);
		C[2] = (V - RGB[2]) / (V - t);

		for (int i = 0; i < 3; i++)
			if (RGB[i] == V)
			{
				if (i == 0)
					k = 3;
				else
					k = i;

				double H = 2 * i + C[k-1] - C[(i+1)%3]	;
				H = 60 * H;
				if (H < 0)
					H = H + 360;
				printf("H = %.3lf\nS = %.3lf\nV = %.3lf\nЦвет примерно между %s\n", H, S, V, tonesHSV[i]);
			}
	}
	else
	{
		char H[]={"Неопределенный цвет (серые оттенки)"};
		printf("%s\nS = %.3lf\nV = %.3lf\n", H, S, V);
	}
}
