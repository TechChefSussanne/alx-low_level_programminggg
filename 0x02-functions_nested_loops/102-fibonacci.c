#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}

/**
 * print_fibonacci - prints the first 50 Fibonacci numbers
 */
void print_fibonacci(void)
{
  unsigned long int prev = 1, curr = 2, next, i;

  _putchar('1');
  _putchar(',');
  _putchar(' ');
  _putchar('2');
  _putchar(',');
  _putchar(' ');

  for (i = 0; i < 48; i++)
  {
    next = prev + curr;
    prev = curr;
    curr = next;

    if (i != 47)
    {
      printf("%lu, ", next);
    }
    else
    {
      printf("%lu\n", next);
    }
  }
}

int main(void)
{
  print_fibonacci();
  return (0);
}
