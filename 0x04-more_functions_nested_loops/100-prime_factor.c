#include <stdio.h>

/**
 * main - print prime
 * Return: 0
 */
int main(void)
{
	unsifned long int i = 3, n = 612852475143;

	for  (; i < 12057; i += 3)
	{
		while (n % i == 0 && n != i)
			n /= i;
	}
	printf("%lu\n", n);
	return (0);
}
