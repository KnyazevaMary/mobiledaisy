#include <stdio.h>
#include <string.h>
void main ()
{
    char str[255];
    printf("Enter the string\n");
    gets(str);
    for (int i=0; i<=(strlen(str)-1); i++)
    {
        if (str[i]<123&&str[i]>96)
        {
        str[i]=str[i]-32;
        }
    }
    printf("New string:\n%s\n", str);
}