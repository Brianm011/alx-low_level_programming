#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints the name of the current file
 * Desc: Using macro __FILE__.
 * Return: 0 on success
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
