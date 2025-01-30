#include "main.h"
/**
 * print_numbers - print number
 * Return void
 */

void print_numbers(void)
{
	int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i, size;

	size = sizeof(numbers) / sizeof(numbers[0]);

	while (i < size)
	{
		_putchar(i);
		i++;
	}
}
