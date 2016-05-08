#include <stdio.h>
#include <string.h>

void main ()
{
    int len;
    char str[255];
    printf("Enter the string\n");
	fgets(str, sizeof(str), stdin);
    len=strlen(str);
    printf("Size of your string is %i bytes\n", len);
}