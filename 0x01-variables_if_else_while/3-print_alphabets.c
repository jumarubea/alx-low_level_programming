#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a[] = {'a', 'b', 'c', 'd', 'e', 'f',
		'g', 'h', 'i', 'j', 'k', 'l', 'm',
		'n', 'o', 'p', 'q', 'r', 's', 't',
		'u', 'v', 'w', 'x', 'y', 'z'};
	int i;
	int size = sizeof(a);
	char upperChar[size];

	for (i = 0; i < size; i++)
	{
		putchar(a[i]);
		upperChar[i] = toupper(a[i]);

	}
	
	for (i = 0; i < size; i++)
        {
                putchar(upperChar[i]);

        }
	
	putchar('\n');
	return (0);
}
