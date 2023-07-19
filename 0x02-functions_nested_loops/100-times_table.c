#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number for which times table is printed.
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, result;

	/* Check if n is within the valid range */
	if (n < 0 || n > 15)
		return;

	/* Iterate through each row */
	for (i = 0; i <= n; i++)
	{
		/* Iterate through each column */
		for (j = 0; j <= n; j++)
		{
			result = i * j;

			/* Print the result */
			if (j == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}

			if (result < 10 && j != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else if (result >= 10 && result < 100)
			{
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else if (result >= 100)
			{
				_putchar((result / 100) + '0');
				_putchar(((result / 10) % 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
