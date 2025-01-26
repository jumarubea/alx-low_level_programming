#include <stdio.h>

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
			printf("%.2d:%.2d\n", hh, mm);
			mm++;
		}
		hh++;
		mm = 0;
	}
}
