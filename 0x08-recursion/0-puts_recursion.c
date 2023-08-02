#include "main.h"
/**
 * _puts_recursion - Recursively prints a string, followed by a newline.
 * @s: Pointer to the string to be printed.
 * Description: This function prints each character of the string recursively until the null terminator is encountered, then adds a newline.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
