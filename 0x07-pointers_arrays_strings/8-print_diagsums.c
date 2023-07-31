#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 *                 of integers.
 * @a: Pointer to the square matrix.
 * @size: Size of the matrix.
 */
void print_diagsums(int *a, int size)
{
    int i, sum1 = 0, sum2 = 0;

    for (i = 0; i < size; i++)
    {
        sum1 += a[i * (size + 1)];
    }

    for (i = 0; i < size; i++)
    {
        sum2 += a[(i + 1) * (size - 1)];
    }

    _putchar(sum1 + '0'); /* Convert sum1 to character and print */
    _putchar(',');
    _putchar(' ');
    _putchar(sum2 + '0'); /* Convert sum2 to character and print */
    _putchar('\n');
}
