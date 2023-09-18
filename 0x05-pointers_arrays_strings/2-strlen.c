#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: pointer variable (string).
 * Return: return the length.
 */

int _strlen(char *s)
{
	int bunch = 0;

	while (*s != '\0')
	{
		bunch++;
		s++;
	}

	return (bunch);
}

