#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns single number from 0-10
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		ptintf("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}
