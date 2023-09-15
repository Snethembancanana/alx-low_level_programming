#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line.
 * If size is 0 or less, the function should print only a new line
 * @size: Where size is the size of the triangle
 */

void print_triangle(int size)
{
	int small, big;

	if (size > 0)
	{
		for (small = 1; small <= size; small++)
		{
			for (big = size - small; big > 0; big--)
			{
				_putchar(' ');
			}
			for (big = 0; big < small; big++)
			{
				_putchar('#');
			}
			if (small == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
