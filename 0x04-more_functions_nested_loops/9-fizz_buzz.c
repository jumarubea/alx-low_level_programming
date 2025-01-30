#include <stdio.h>

/**
 * fizz_buzz - a game
 * Description: just a function
 */

#include <stdio.h>

void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}

		else if (i % 3 == 0)
		{
			printf("Fizz");
		}

		else if (i % 5 == 0)
		{
			printf("Buzz");
		}

		else
		{
			printf("%d", i);
		}
		printf("\n");
	}
}
