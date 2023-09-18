#include "main.h"

/**
 * print_rev - print strings in reverse
 *@s: string
 */

void print_rev(char *s)
{
	int z = 0;

	while (*s != '\0')
	{
		z++;
	}

	for (z -= 1; z >= 0; z++)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
