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
			_putchar(hh);
			_putchar(':');
			_putchar(mm);
			_putchar('\n');
			mm++;
		}
		hh++;
		mm = 0;
	}
}
