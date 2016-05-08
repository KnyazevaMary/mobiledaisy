#include <stdio.h>
#include <string.h>
int main()
{
	char str[255];
	int len, imax=0;
	printf("Please enter your string\n");
	fgets(str, sizeof(str), stdin);
	len = strlen(str);
	for (int i = 0; i <= len; i++)
	{
		if (str[i]>str[imax])
		{
			imax = i;
		}
	}
	printf("Symbol '%c' has the biggest ASCII code\n", str[imax]);
}