#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * of integers.
 * @matrix: matrix to be summed
 */
void print_diagsums(Matrix matrix)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < matrix.size; i++)
	{
		sum1 += matrix.a[i * matrix.size + i];
		sum2 += matrix.a[i * matrix.size + (matrix.size - 1 - i)];
	}

	_putchar(sum1 / 10 + '0');
	_putchar(sum1 % 10 + '0');
	_putchar(',');
	_putchar(' ');
	_putchar(sum2 / 10 + '0');
	_putchar(sum2 % 10 + '0');
	_putchar('\n');
}
