#include <unistd.h>

/**
 * main - Entry point
 * Return: Always 1 (Failure)
 */
int main(void)
{
    write(STDOUT_FILENO, "and that piece of art is useful", 30);
    write(STDOUT_FILENO, "\" - Dora Korpar, 2015-10-19\n", 29);
    return (1);
}
