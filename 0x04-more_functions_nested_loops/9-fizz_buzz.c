#include <stdio.h>

/**
 * fizz_buzz - a game
 * Description: just a function
 */
void fizz_buzz(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			if ((i % 5) == 0)
				printf("FizzBuzz");
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			if ((i % 3) == 0)
				printf("FizzBuzz");
			printf("Buzz");
		}
		else
			printf(i);
	}
}
