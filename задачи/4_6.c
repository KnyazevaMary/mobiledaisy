#include <stdio.h>
#include <windows.h>

void main()
{
	double pc;
	int pci, i;
	printf("Enter the progress in a percentage\n");
	scanf_s("%lf", &pc);
	pc = pc / 2.5;
	pci = (int)pc;
	printf("[");
	for (i = 1; i <= pci; i++)
	{
		printf("=");
		Sleep(50);
	}
	for (i = 1; i <= (40 - pci); i++)
	{
		printf(" ");
	}
	printf("]\n");
}