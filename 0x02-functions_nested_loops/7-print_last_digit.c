#include "main.h"

/**
 * print_last_digit - function to return the last digit
 *
 * Description: a just a modulus of 10
 * @n: takes inputs as number
 *
 * Return: int value that is last digit
 */

int print_last_digit(int n)
{
	int value;

	value = n % 10;

	if (value < 0)
	{
		value = -value;
	}

	_putchar(value + '0');

	return (value);
}
