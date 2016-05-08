#include <stdio.h>

int main()
{
	char a = 3;
	printf("char - %i byte\n", sizeof(a));
	printf("int - %i bytes\n", sizeof((int)a));
	printf("float - %i bytes\n", sizeof((float)a));
	printf("double - %i bytes\n", sizeof((double)a));
}
