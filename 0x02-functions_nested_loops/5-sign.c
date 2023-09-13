#include "main.h"
/**
 * print_sign - entry point of a function that prints the sign
 * @n: char that needs to be checked
 * Return: return (1) when positive int,
 *         (0) when int is 0,
 *         (-1) when negative int.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
