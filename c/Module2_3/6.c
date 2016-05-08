#include <stdio.h> 

void main() 
{ 
double pc; 
int pci, i; 
printf("Введите прогресс в процентах\n"); 
scanf("%lf", &pc); 
pci = (int) (pc / 2.5); 
printf("["); 
for (i = 1; i <= pci; i++)  printf("="); 
for (i = 1; i <= (40 - pci); i++) printf(" "); 
printf("]\n"); 
}