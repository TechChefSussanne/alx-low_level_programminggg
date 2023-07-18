#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = -n; /* Make n positive if it's negative */

	last_digit = n % 10; /* Get the remainder when divided by 10 */
	_putchar(last_digit + '0'); /* Convert the digit to character and print */
	return (last_digit);
}
