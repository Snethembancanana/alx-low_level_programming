#include "main.h"

/**
 * print_rev - print strings in reverse
 *@s: string
 */

void print_rev(char *s)
{
	int begi = 0;

	while (s[begi])
	{
		begi++;
	}

	while (begi--)
	{
		_putchar(s[begi]);
	}
	_putchar('\n');
}
