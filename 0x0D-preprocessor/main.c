#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the name of the current file
 * desc: using macro __FILE__.
 * Return: 0 on success
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return(0);
}
