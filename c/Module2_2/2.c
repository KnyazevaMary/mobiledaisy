#include <stdio.h>

void main ()
{
    for(int i=32; i<=127; i++)
    {
        printf("%c = %i\t",i,i);
        if ((i + 1) % 8 == 0)
        printf("\n");  
    }
    printf("\n");
}