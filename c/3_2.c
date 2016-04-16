#include <stdio.h>
void main ()
{
    char symb;
    for(int i=0; i<=255; i++)
    {
        symb=i;
        printf("%c = %i\t",symb,i);
        
        if (i%8==0)
        {
        printf("\n");
        }    
    }
    printf("\n");
}