#include <stdio.h>
#include <string.h>
#include <math.h>  //необходимо вводить -lm при компиляции
#include <assert.h>

double StrToAct(double num_1, double num_2, int k)
{
	if (k == 0)
		return(num_1 + num_2);
	if (k == 1)
		return(num_1 - num_2);
	if (k == 2)
		return(num_1*num_2);
	if (k == 3)
		return(num_1/num_2);
	if (k == 4)
		return(fmod(num_1, num_2));
	if (k == 5)
		return(pow(num_1, num_2));
	return(0);
}

void main()
{
	char str[255], func[] = {"+-*/%^"};
	int len, lenf, k=0, actnum;
	double num[2] = {0, 0}, result;
	
	printf("Введите выражение в одно действие\nДопустимые действия + - * / %% ^\n");
	fgets(str, sizeof(str), stdin);
	
	len = strlen(str);
	lenf = strlen(func);
	
	for (int i = 0; i < len; i++)
	{
		if ((str[i] >= 48) && (str[i] <= 57))
			num[k] = 10 * num[k] + (double)str[i] - 48;
		else
			for (int j = 0; j < lenf; j++)
				if (str[i] == func[j])
				{
					assert(++k < 2);
					actnum = j;
					break;
				}
	}
	assert(k > 0);
	result = StrToAct(num[0], num[1], actnum);
	printf("%.3lf\n", result);
}
