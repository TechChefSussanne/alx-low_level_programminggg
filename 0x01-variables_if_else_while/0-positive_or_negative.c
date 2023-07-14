#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a random number and states whether
 * it is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0)); /* Initialize random seed */
	n = rand() - RAND_MAX / 2; /* Generate a random number */

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
