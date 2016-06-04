#include <stdio.h>
#include <string.h>

void main()
{
	char str[255];
	int freq[127], length, k = 1, max, numax;
	
	for (int i = 0; i < 127; i++)
		freq[i] = 0;

	printf("Введите строку\n");
	
	fgets(str, sizeof(str), stdin);
	length = strlen(str);
	
	for (int i = 0; i < length; i++)
		freq[str[i]]++;

	printf("Символы в порядке убывания по частоте появления\n");

	while (k)
	{
		k = 0;
		max = 0;

		for (int i = 32; i < 127; i++)
		{
			if (freq[i] > max)
			{
				numax = i;
				max = freq[i];
				k++;
			}
		}

		if (k > 0)
		{
			printf("%c ", numax);
			freq[numax] = 0;
		}
	}
	printf("\n");
}
