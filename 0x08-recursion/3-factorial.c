#include "main.h"

/**
 * factorial - returns factorial of a given number n:
 * 1 if n is 0, -1 if n < 0
 *
 * @n: number to evaluate
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
