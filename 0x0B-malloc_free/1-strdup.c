#include "main.h"
#include "stdlib.h"

/**
 * _strdup - return a pointer to a newley allocated
 * space in the memory also duplicate to the string
 * it holds to thr new space.
 *
 * @str: initial input string
 *
 * Return: pointer to thr memory allocated which is
 * an array of char.
 */

char *_strdup(char *str)
{
	size_t i, z;
	char *strdout;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	strdout = malloc(sizeof(char) * (i + 1));
	if (strdout == NULL)
	{
		return (NULL);
	}
	for (z = 0; z < i; z++)
	{
		strdout[z] = str[z];
	}
	return (strdout);
}
