/* File: fibonacci.c */

#include "main.h"

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers
 */
void print_fibonacci(void)
{
	unsigned long fib1 = 1, fib2 = 2, fib3;
	int count;

	_putchar('1'); /* Print first Fibonacci number */
	_putchar(',');
	_putchar(' ');

	_putchar('2'); /* Print second Fibonacci number */
	_putchar(',');
	_putchar(' ');

	for (count = 3; count <= 98; count++)
	{
		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;

		print_number(fib3);

		if (count != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}

	_putchar('\n');
}

/**
 * print_number - Prints a number
 * @n: The number to be printed
 */
void print_number(unsigned long n)
{
	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
