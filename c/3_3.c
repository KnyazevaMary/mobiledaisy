#include <stdio.h>
void main ()
{
    int len;
    char str[255];
    printf("Enter the string\n");
    gets(str);
    len=strlen(str)+1;
    printf("Size of your string is %d bytes\n", len);
}