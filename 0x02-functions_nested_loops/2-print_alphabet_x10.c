#include "main.h"
/**
 * print_alphabet_x10 - This function prints the alphabet from 'a' to 'z'
 * Return: void
 */

void print_alphabet_x10(void)
{
	char character;
	int amount;

	for (amount = 0; amount <= 10; amount++)
	{
		for (character = 'a'; character <= 'z'; character++)
			_putchar(character);
	_putchar('\n');
	}
}
