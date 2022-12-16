#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: input character
 * Return: 1 if c is uppercase or 0 otherise
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
