#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: Starting number
 */
void print_to_98(int n)
{
	/* Check if n is less than 98 */
	if (n <= 98)
	{
		/* Print numbers from n to 98 */
		while (n <= 98)
		{
			_putchar(n / 10 + '0'); /* Print tens digit */
			_putchar(n % 10 + '0'); /* Print ones digit */

			/* Print comma and space if n is not 98 */
			if (n != 98)
			{
				_putchar(','); /* Print comma */
				_putchar(' '); /* Print space */
			}

			n++; /* Increment n */
		}
	}
	else
	{
		/* Print numbers from n to 98 */
		while (n >= 98)
		{
			_putchar(n / 10 + '0'); /* Print tens digit */
			_putchar(n % 10 + '0'); /* Print ones digit */

			/* Print comma and space if n is not 98 */
			if (n != 98)
			{
				_putchar(','); /* Print comma */
				_putchar(' '); /* Print space */
			}

			n--; /* Decrement n */
		}
	}

	_putchar('\n'); /* Print new line */
}
