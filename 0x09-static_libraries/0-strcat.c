#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 * Return: Returns a pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int length;
	int index;

	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (index = 0; src[index] != '\0'; index++)
	{
		dest[length] = src[index];
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
