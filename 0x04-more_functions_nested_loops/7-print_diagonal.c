#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: Length of the diagonal
 *
 * Description: This function prints a diagonal line using the character '\'
 *              The length of the diagonal is specified by the parameter 'n'
 *              If 'n' is less than or equal to 0, no output is printed.
 */
void print_diagonal(int n)
{
    /* Variables for loop iterations */
    int a, b;

    /* Check if n is non-positive */
    if (n <= 0)
        _putchar('\n');

    /* Loop for printing the diagonal */
    for (a = 0; a < n; a++)
    {
        /* Loop for printing leading spaces */
        for (b = 0; b < a; b++)
        {
            _putchar(' ');
        }

        /* Print the diagonal character */
        _putchar('\\');
        _putchar('\n');
    }
}
