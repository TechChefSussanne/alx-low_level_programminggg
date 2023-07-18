#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @nld: The number to extract the last digit from.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int nld)
{
	int last_digit;

	last_digit = nld % 10; /* Calculate the last digit */

	if (last_digit < 0)
	{
		last_digit = -last_digit; /* Convert negative last digit to positive */
	}

	_putchar(last_digit + '0'); /* Print the last digit */
	return last_digit; /* Return the value of the last digit */
}
