#include "main.h"
/**
 * print_numbers - print number
 * Return void
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
