#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int num, guess, cl=4, clue;
	srand((int)time(NULL));
	num = ((rand() % 458) % (rand() % 659)) % 101;
	char *comp[] = { "bigger","smaller" }, *note[] = { "left arm","right leg","right arm","left leg", "head and died" };
	printf("HOW TO PLAY\nThe program comes up with an integer from 0 to 100.\nYou have only 5 attempts to guess it.\nAfter every failed attempt hostage Kostik will lose a limb until he dies.\nBut Kostik can survive if you'll guess number right.\nGood luck have fun!\n\nOkay, do your best\n");
	for (int i = 0; i <= 4; i++)
	{
		scanf_s("%d", &guess);
		if ((guess != num)&&(i!=3))
		{
			printf("Sorry my number is %s. By the way, Kostik lose his %s\n", comp[guess>num], note[i]);
			if (i != 4)
			{
				printf("Try again\n");
			}
			else
			{
				printf("\nMy number was %i\n", num);
			}
		}
		else if ((guess != num) && (i == 3))
		{
			clue = ((rand() % 684) % (rand() % 271)) % cl;
			if ((num - clue + 1) < 0)
			{
				clue = num;
			}
			else if ((num + (cl - clue) + 1) > 100)
			{
				clue = num + cl + 1 - 100;
			}
			printf("Kostik lose his %s. This is your last chance so I'll give you a clue.\nMy number is between %i and %i\n", note[i], (num - clue - 1), (num + cl + 1 - clue));
		}
		else 
		{
			printf("Well done! Kostik survived\n");
			break;
		}
	}
	return 0;
}