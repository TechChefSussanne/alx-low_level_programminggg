#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: Length of the diagonal
 *
 * Description:
 * This function prints a diagonal line on the terminal using the character '\'.
 * The length of the diagonal is specified by the parameter 'n'.
 *
 * If 'n' is less than or equal to 0, this function does not print anything.
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
