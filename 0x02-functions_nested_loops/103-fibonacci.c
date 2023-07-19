#include "main.h"

/**
 * fibonacci_sum_even - Computes the sum of even-valued terms in Fibonacci
 * sequence up to a given limit.
 * @limit: The upper limit for Fibonacci sequence terms.
 *
 * Return: The sum of even-valued terms.
 */
int fibonacci_sum_even(int limit)
{
	int term1 = 1, term2 = 2, current_term, sum = 0;

	while (term1 <= limit)
	{
		if (term1 % 2 == 0)
			sum += term1;

		current_term = term1 + term2;
		term1 = term2;
		term2 = current_term;
	}

	return sum;
}
