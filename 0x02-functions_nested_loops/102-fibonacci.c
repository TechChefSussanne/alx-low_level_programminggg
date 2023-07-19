#include "main.h"

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to be written
 *
 * Return: On success 1
 * On error, -1 is returned and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_fibonacci - Prints the first 50 Fibonacci numbers
 */
void print_fibonacci(void)
{
	unsigned long int num1 = 1, num2 = 2, next;
	int i;

	_putchar('1' + '0');
	_putchar(',');
	_putchar(' ');

	_putchar('2' + '0');
	_putchar(',');
	_putchar(' ');

	for (i = 2; i < 50; i++)
	{
		next = num1 + num2;
		_putchar((next / 10) + '0');
		_putchar((next % 10) + '0');

		if (i != 49)
		{
			_putchar(',');
			_putchar(' ');
		}

		num1 = num2;
		num2 = next;
	}

	_putchar('\n');
}
