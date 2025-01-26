#include <stdio.h>

/**
 * print_to_98 - just to converge to 98
 *
 * Description: just able to converge to 98
 * @n: initial number
 *
 * Return: numbers
 */

void print_to_98(int n)
{
	while ((n - 98) > 0)
	{
		printf("%d, ", n);
		n--;
	}
	while ((n - 98) < 0)
	{
		printf("%d, ", n);
		n++;
	}
	printf("98\n");
}
