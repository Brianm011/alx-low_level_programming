#include "main.h"

/**
 * print_line - draw a straight line from terminal
 * @n: number of times
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
