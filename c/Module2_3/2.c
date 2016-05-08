#include <stdio.h>
#include <string.h>

void main()
{
	char str[255];
	int len, imax = 0, j = 0;
	printf("Введите Вашу строку\n");
	fgets(str, sizeof(str), stdin);
	len = strlen(str);
	for (int i = 0; i <= len; i++)
		if (str[i]!=str[i+1])
			str[j++] = str[i];
	str[j] = '\0';
	printf("%s\n", str);
}