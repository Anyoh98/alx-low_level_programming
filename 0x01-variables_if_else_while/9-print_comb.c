#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (success)
*/

int main(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        putchar(i + 48);
        if (i < 9)
        {
            putchar(44);
            putchar(32);
            continue;
        }
    putchar('\n');
    return (0);
    }
}
