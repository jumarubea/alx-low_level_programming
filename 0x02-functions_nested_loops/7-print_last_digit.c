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

	if (n >= 0)
	{
		value = n % 10;
		_putchar(value);
		return (value);
	}
	else
	{
		value = (-1 * n) % 10;
		_putchar(value);
		return (value);
	}
}
