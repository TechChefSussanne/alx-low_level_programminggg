#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: Length of the diagonal
 *
 * Description: This function prints a diagonal line using '\' character
 *              on the terminal. The length of the diagonal is determined by 'n'.
 *
 * Return: void
 */
void print_diagonal(int n)
{
    int a, b;

    if (n <= 0)
        _putchar('\n');

    for (a = 0; a < n; a++)
    {
        for (b = 0; b < a; b++)
        {
            _putchar(' ');
        }

        _putchar('\\');
        _putchar('\n');
    }
}
