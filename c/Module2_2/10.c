#include <stdio.h>

void main()
{
	char a = 3;
	printf("char - %li byte\n", sizeof(a));
	printf("int - %li bytes\n", sizeof((int)a));
	printf("float - %li bytes\n", sizeof((float)a));
	printf("double - %li bytes\n", sizeof((double)a));
}
