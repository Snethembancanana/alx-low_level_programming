#include "main.h"
/**
 * print_alphabet_x10 - This function prints the alphabet from 'a' to 'z'
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c;
	int n;

	for (n = 0; n <= 10; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(alpha);
	_putchar('\n');
	}
}
