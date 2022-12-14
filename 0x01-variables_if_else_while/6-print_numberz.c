#include <stdio.h>
#include <stdlib.h>

/**
 * main - return single number from 0-10
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
