#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	_putchar(sum / 1000 + '0'); /* Print thousands digit */
	_putchar((sum % 1000) / 100 + '0'); /* Print hundreds digit */
	_putchar((sum % 100) / 10 + '0'); /* Print tens digit */
	_putchar(sum % 10 + '0'); /* Print ones digit */
	_putchar('\n');

	return (0);
}
