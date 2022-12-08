#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsignedlong)sizeof(d));
	printf("Size of an int: %lu byte(s)\n", (unsignedlong)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsignedlong)sizeof(b));
        printf("Size of a long long int: %lu byte(s)\n", (unsignedlong)sizeof(c));
	printf("Size of a float: %lu byte(s)\n", (unsignedlong)sizeof(f));
	return (0)
}
