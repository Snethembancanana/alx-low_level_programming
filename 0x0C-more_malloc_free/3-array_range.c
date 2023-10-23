#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum value
 * @max: max value
 * Return: int pointer to the allocated memory
 */

int *array_range(int min, int max)
{
	int m, n;
	int *p;

	if (min > max)
		return (NULL);
	n = max - min + 1;
	p = malloc(sizeof(int) * n);
	if (p == NULL)
		return (NULL);
	for (m = 0; m < n; m++)
	{
		p[m] = min;
		min++;
	}
	return (p);
}
