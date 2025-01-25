#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	void print_alphabet(void)
	{
		char arr[] = {'a', 'b', 'c', 'd', 'e', 'f',
                'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
                'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
                'x', 'y',  'z'};
		
		int i;
		int size = sizeof(arr) / sizeof(arr[0]);
		
		for (i = 0; i < size; i++)
		{
			_putchar(arr[i]);
		}
		
		_putchar('\n');
	}
	print_alphabet();
	return (0);
}
