#include "main.h"

/**
 * _strncpy - c function that copies a string, including the
 * terminating null byte, using at most an inputtednumber of bytes
 * if the length of the of the source string is less than the maximum byte number
 * the remainder of the destination string is filled with null bytes
 * works identically to th standard library function "strncpy"
 * @dest: buffer storing the string copy
 * @src: the source string
 * @n: max number of byte copied
 * Return: returns
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = sr[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
