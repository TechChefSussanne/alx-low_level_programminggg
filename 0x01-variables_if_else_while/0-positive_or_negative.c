#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - Entry point of the program
 *
 * This program generates a random number and prints
 * whether it is positive, negative, or zero.
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    /* Check the value of n and print the corresponding message */
    if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n < 0)
    {
        printf("%d is negative\n", n);
    }
    else
    {
        printf("%d is zero\n", n);
    }

    return (0);
}
