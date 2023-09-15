#include "main.h"

/**
 * print_diagonal -  function that draws a diagonal line on the terminal
 * @n: If n is 0 or less, the function should only print a \n
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, b;

		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
			{
				if (a == b)
					_putchar('\\');
				else if (a > b)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
