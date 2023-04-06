#include "main.h"

/**
 * Factorial - gets factoral of n
 * @n: integer
 *
 * Return: on success 1
 * On error,-1 is returned errno is set appropriately
 */
int factorial (int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	Return (n * factorial(n - 1));
}
