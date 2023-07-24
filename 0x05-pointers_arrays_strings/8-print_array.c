#include "main.h"

/**
 * print_array - Prints an inputted number of elements
 *               of an array of integers.
 * @a: The array of integers.
 * @n: The number of elements to be printed.
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		_putchar(a[index] + '0');

		if (index == n - 1)
			continue;

		_putchar(',');
		_putchar(' ');
	}

	_putchar('\n');
}
