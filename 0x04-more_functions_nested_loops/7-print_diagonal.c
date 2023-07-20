#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: Length of the diagonal.
 *
 * Description: Prints a diagonal line using the character '\'.
 *              The length of the diagonal is specified by 'n'.
 *              If 'n' is less than or equal to 0, nothing is printed.
 */
void print_diagonal(int n)
{
    /* Initialize variables for loop */
    int a, b;

    /* Check if n is valid */
    if (n <= 0)
        _putchar('\n');

    /* Loop to print diagonal line */
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
