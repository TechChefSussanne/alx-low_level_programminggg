#include "main.h"

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to be written
 *
 * Return: On success 1.
 * On error, -1 is returned and errno is set appropriately.
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
	int i;
	unsigned long prev = 1, current = 2, next;

	_putchar('1');
	_putchar(',');
	_putchar(' ');
	_putchar('2');

	for (i = 3; i <= 50; i++)
	{
		next = prev + current;
		_putchar(',');
		_putchar(' ');
		printf("%lu", next);
		prev = current;
		current = next;
	}
	_putchar('\n');
}

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	print_fibonacci();

	return (0);
}
