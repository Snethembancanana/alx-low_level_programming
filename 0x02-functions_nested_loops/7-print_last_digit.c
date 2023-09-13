#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @d: char will be checked
 * Return: returns (0)
 */

int print_last_digit(int d)
{
	int last = d % 10;

	if (d < 0)
		last *= -1;
	_putchar(last + '0');
	return (last);
}

