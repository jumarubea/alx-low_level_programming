#include "main.h"

/**
 * print_alphabet - print whole letter
 * Return: void
 */
void print_alphabet(void)
{
        char arr[] = {'a', 'b', 'c', 'd', 'e', 'f',
                'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
                'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
                'x', 'y',  'z'};
        int i;

        for (i = 0; i < sizeof(arr); i++)
        {
                _putchar(arr[i]);
        }
        _putchar('\n');
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
    print_alphabet();
    return (0);
}
