#include "main.h"

/**
 * _islower - Function that checks for lowercase character
 * @c: parameter to be checked
 * Return: return (1) or (0)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

