#include "main.h"

/**
 * main - Entry point
 *
 * Description: Finds and prints the first 98 Fibonacci numbers,
 *              starting with 1 and 2, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i, j, k, j1, j2, k1, k2;

	j = 1;
	k = 2;

	_putchar(j + '0'); /* Print the first Fibonacci number */

	for (i = 1; i < 91; i++)
	{
		_putchar(','); /* Print the comma separator */
		_putchar(' ');

		_putchar(k + '0'); /* Print the current Fibonacci number */

		k = k + j;
		j = k - j;
	}

	/* Calculate and print the last 7 Fibonacci numbers */
	j1 = j / 1000000000;
	j2 = j % 1000000000;
	k1 = k / 1000000000;
	k2 = k % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		_putchar(','); /* Print the comma separator */
		_putchar(' ');

		_putchar(k1 + '0'); /* Print the high part of the Fibonacci number */
		print_number(k2); /* Print the low part of the Fibonacci number */

		k1 = k1 + j1;
		j1 = k1 - j1;
		k2 = k2 + j2;
		j2 = k2 - j2;
	}

	_putchar('\n'); /* Print a new line */

	return (0);
}

/**
 * print_number - Prints a number with leading zeros if necessary
 * @number: The number to print
 */
void print_number(unsigned long int number)
{
	if (number < 10)
		_putchar('0'); /* Print leading zero if necessary */

	if (number < 100)
		_putchar('0'); /* Print leading zero if necessary */

	if (number < 1000)
		_putchar('0'); /* Print leading zero if necessary */

	if (number < 10000)
		_putchar('0'); /* Print leading zero if necessary */

	if (number < 100000)
		_putchar('0'); /* Print leading zero if necessary */

	if (number < 1000000)
		_putchar('0'); /* Print leading zero if necessary */

	if (number < 10000000)
		_putchar('0'); /* Print leading zero if necessary */

	if (number < 100000000)
		_putchar('0'); /* Print leading zero if necessary */

	if (number < 1000000000)
		_putchar('0'); /* Print leading zero if necessary */

	_putchar(number + '0'); /* Print the number */
}
