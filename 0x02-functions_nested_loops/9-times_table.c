#include "main.h"

/**
 * times_table - Prints the 9 times table, starting from 0
 *
 * Description: This function uses _putchar to display the table,
 * formatted with spaces and commas for proper alignment.
 * Return: void
 */
void times_table(void)
{
	int row, col, product;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			product = row * col;

			if (col != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (product <= 9)
					_putchar(' ');
			}

			if (product <= 9)
				_putchar('0' + product);
			else
			{
				_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
			}
		}
		_putchar('$');
		_putchar('\n');
	}
}

