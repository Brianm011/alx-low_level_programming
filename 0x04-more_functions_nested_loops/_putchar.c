#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: on success 1
 * On erroe, -1 is returned and errno is set appropriately
 */
int _putcahr(char c)
{ 
	return (write(1, &c, 1));
}
