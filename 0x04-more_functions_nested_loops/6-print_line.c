#include "main.h"

/**
 * print_line -  n is the number of times the character _ should be printed
 * @n: If n is 0 or less, the function should only print \n
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a;

		for (a = 1; a <= 'n'; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
