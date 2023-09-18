#include "main.h"

/**
 * print_rev - print strings in reverse
 *@s: string
 */

void print_rev(char *s)
{
	int bunch = 0;
	int z;

	while (*s != '\0')
	{
		bunch++;
		s++;
	}
	s--;
	for (z = bunch; z > 0; z++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
