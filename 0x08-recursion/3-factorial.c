#include "main.h"

/**
 * Factorial - gets factorial of n
 * @n: the number to find the factorials of
 * Return: the factorial of @n
 */
int factorial(int n);
{
	if (n < 0)
		return (-1);

	 if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
