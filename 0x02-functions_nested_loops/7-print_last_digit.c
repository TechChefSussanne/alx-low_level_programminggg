#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = (n % 10);  /* Calculate the last digit of the number */

	if (last_digit < 0)
	{
		last_digit = (-1 * last_digit);  /* Convert negative last digit to positive */
	}

	_putchar(last_digit + '0');  /* Print the last digit */
	return last_digit;  /* Return the last digit value */
}
