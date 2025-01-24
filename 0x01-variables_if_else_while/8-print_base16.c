#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hex[] = {0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7,
		0x8, 0x9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf};

	int size = sizeof(hex) / sizeof(hex[0]);
	int i;

	for (i = 0; i < size; i++)
	{
		if (hex[i] < 10)
			putchar(hex[i] + '0');
		else
			putchar(hex[i] - 10 + 'a');
	}
	putchar('\n');
	return (0);
}
