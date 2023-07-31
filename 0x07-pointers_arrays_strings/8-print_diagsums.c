#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * of integers.
 * @a: matrix to be summed
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	/* Calculate the sum of the main diagonal */
	for (i = 0; i < size; i++)
	{
		sum1 += a[i * (size + 1)];
	}

	/* Calculate the sum of the secondary diagonal */
	for (i = 0; i < size; i++)
	{
		sum2 += a[(i + 1) * (size - 1)];
	}

	_putchar(sum1 / 100 + '0');
	_putchar((sum1 / 10) % 10 + '0');
	_putchar(sum1 % 10 + '0');
	_putchar(',');
	_putchar(' ');
	_putchar(sum2 / 100 + '0');
	_putchar((sum2 / 10) % 10 + '0');
	_putchar(sum2 % 10 + '0');
	_putchar('\n');
}
