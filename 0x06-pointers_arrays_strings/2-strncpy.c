#include "main.h"

/**
 * _strncpy - function that copies a string
 * of bytes from string src into dest
 * @dest: buffer storinnnggthe string copy
 * @src: the source tring
 * @n: the maximum numer ofytes to copyrom src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_le++;

	for (index = 0; src[index] && index < n; index++)
		dest[indx] = '\0';

	return (dest);
}
