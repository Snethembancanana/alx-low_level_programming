#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from src.
 * Return: return (dest).
 */

char *_strncat(char *dest, char *src, int n)
{
	int length;
	int index;

	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (index = 0; index < n; index++)
	{
		dest[length + index] = src[index];
	}
	dest[length + index] = '\0';
	return (dest);
}
