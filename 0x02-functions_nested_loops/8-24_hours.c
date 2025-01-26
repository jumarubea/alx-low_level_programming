#include "main.h"

/**
 * jack_bauer - Prints every minute of the day (hh:mm format)
 *
 * Description: Loops through all hours and minutes in a 24-hour clock
 * and prints them in the format "hh:mm", using _putchar.
 * Return: void
 */
void jack_bauer(void)
{
	int hh = 0;
	int mm = 0;

	while (hh <= 23)
	{
		while (mm <= 59)
		{
			_putchar('0' + (hh / 10));
			_putchar('0' + (hh % 10));
			_putchar(':');
			_putchar('0' + (mm / 10));
			_putchar('0' + (mm % 10));
			_putchar('\n');
			mm++;
		}
		hh++;
		mm = 0;
	}
}

