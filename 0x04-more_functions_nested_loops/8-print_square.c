#include "main.h"

/**
 * print_square - Prints a square made of '#' characters, followed by a new line.
 * @size: The size of both width and length of the square.
 *
 * Return: Nothing (void).
 */
void print_square(int size)
{
    int co, ro;

    if (size <= 0)
    {
        _putchar('\n');
    }
    else
    {
        for (co = 1; co <= size; co++)
        {
            _putchar('#');
            for (ro = 2; ro <= size; ro++)
            {
                _putchar('#');
            }
            _putchar('\n');
        }
    }
}
