#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */

int main(void)
{
    int i, j;

    for (i = 0; i < 100; i++)
    {
        for (j = i; j < 100; j++)
        {
            printf("%02d ", i);

            printf("%02d", j);

            if (!(i == 99 && j == 99))
            {
                printf(", ");
            }
        }
    }

    printf("\n");
    return 0;
}

