#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphaets both except e and q
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}
	puytchar('\n');
	return (0);
}
