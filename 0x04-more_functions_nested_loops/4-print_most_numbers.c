#include "main.h"

/**
 * print_most_numbers - a number
 * Return: number except 2, 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 or i == 4)
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
