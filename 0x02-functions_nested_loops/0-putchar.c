#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - Entry point
 * Return: 0 (Success)
 */

int main(void)
{
	char arr[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i;

	for (i = 0; i < sizeof(arr); i++)
	{
		_putchar(arr[i]);
	}
	_putchar('\n');

	return (0);
}
