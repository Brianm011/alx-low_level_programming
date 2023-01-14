#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
  *malloc_checked - allocate memory using malloc
  *@b: unsigned int
  *Return: return pointer
  */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
