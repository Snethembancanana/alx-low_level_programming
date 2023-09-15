#include "main.h"

/**
 * print_number - function that prints an integer
 * not allowed to use long
 * not allowed to use arrays or pointers
 * not allowed to hard-code special values
 * @n: will be checked
 */

void print_number(int n)
{
	unsigned int value = n;

	if (n < 0)
	{
		_putchar('-');
		value = -value;
	}
	if ((value / 10) > 0)
		print_number(value / 10);

	_putchar((value % 10) + '0');
}
