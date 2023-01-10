#include <stdio.h>
#include "main.h"
/**
  *main - print name of program
  *@argc: count arguments
  *@argv: arguments
  *Return: 0
  */
int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
