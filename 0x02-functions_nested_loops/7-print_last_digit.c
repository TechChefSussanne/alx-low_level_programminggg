#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @nld: The number's last digit result.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int nld)
{
	int pld;

	pld = (nld % 10); /* Calculate the last digit of the number */

	if (pld < 0)
	{
		pld = (-1 * pld); /* Convert negative last digit to positive */
	}

	_putchar(pld + '0'); /* Print the last digit */
	return pld; /* Return the last digit value */
}
