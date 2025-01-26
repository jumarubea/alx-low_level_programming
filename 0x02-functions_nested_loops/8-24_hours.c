#include "main.h"

/**
 * jack_bauer - a function to print min and hour
 *
 * Description: just a watch
 * Return: hh:mm
 */

void jack_bauer(void)
{
	int hh = 0;
	int mm = 0;

	while (hh <= 23)
	{
		while (mm <= 59)
		{
			_putchar(hh + '0');
			_putchar(':' + '0');
			_putchar(mm + '0');
			_putchar('\n');
			mm++;
		}
		hh++;
		mm = 0;
	}
}
