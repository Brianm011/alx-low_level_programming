#include "main.h"
/**
 * _strchr - string character 
 * @s: string given
 * @c: another char
 * Return: a string
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] == c)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
