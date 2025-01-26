#include "main.h"

/**
 * print_alphabet_x10 - display alphabet 10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
	char arr[] = {'a', 'b', 'c', 'd', 'e', 'f',
		'g', 'h', 'i', 'j', 'k', 'l', 'm',
		'n', 'o', 'p', 'q', 'r', 's', 't',
		'u', 'v', 'w', 'x', 'y', 'z'};

	int i, j;
	int size = sizeof(arr) / sizeof(arr[0]);

	for (i = 0; i < 10; i++)
	{
		j = 0;

		while (j < size)
		{
			_putchar(arr[j]);
			j++;
		}
		_putchar('\n');
	}
}
