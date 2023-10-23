#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatinates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of elements to concatenate from s2
 * Return: pointer to the new allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	unsigned int s1_len = strlen(s1);
	unsigned int s2_len = strlen(s2);

	if (n >= s2_len)
	{
		n = s2_len;
	}

	char *outcome = malloc(s1_len + n + 1);

	if (outcome == NULL)
	{
		return (NULL);
	}
	strcpy(outcome, s1);
	strncat(outcome, s2, n);
	return (outcome);
}
