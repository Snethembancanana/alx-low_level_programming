#include "main.h"

/**
 * _strncpy - copy a string.
 * @dest: destination string.
 * @src: source string.
 * @n: number of bytes.
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	while (src[index] != '\0' && index < n)
	{
		dest[index] = src[index];
		index++;
	}
	if (index < n)
	{
		dest[index] = '\0';
	}
	return (dest);
}



