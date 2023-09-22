#include "main.h"

/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 * Return: n
 */

char *string_toupper(char *n)
{
	int index;


	index = 0;
	while (n[index] != '\0')
	{
		if (n[index] >= 'a' && n[index] <= 'z')
			n[index] = n[index] - 32;
		index++;
	}
	return (n);
}
