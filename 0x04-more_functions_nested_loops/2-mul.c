#include "main.h"

/**
 * _putchar - Writes a character to stdout
 * @c: The character to print
 *
 * Return: On success, 1. On error, -1.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * mul - Multiplies two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The result of the multiplication
 */
int mul(int a, int b)
{
	int result = 0;

	/* Check if either of the integers is zero */
	if (a == 0 || b == 0)
		return 0;

	/* If 'b' is negative, make it positive and adjust 'a' accordingly */
	if (b < 0)
	{
		a = -a;
		b = -b;
	}

	/* Perform multiplication using repeated addition */
	while (b > 0)
	{
		result += a;
		b--;
	}

	return result;
}
