#include "main.h"
/**
 * print_line - print a line
 * Description: a just
 * @n: length of the line
 * Return: a line
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
			_putchar('_');
	}
	else
		_putchar('\n');
}
