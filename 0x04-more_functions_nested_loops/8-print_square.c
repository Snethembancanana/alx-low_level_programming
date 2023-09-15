#include "main.h"

/**
 * print_square -  function that prints a square, followed by a new line
 * @size: If size is 0 or less, the function should print only a new line
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, b;

		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

