#include "function_pointers.h"

/**
 * int_index - funtion that searches for an integer
 * @array: array
 * @size: size of the array
 * @cmp: function pointer to compare search int
 * Return: -1 if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) <= 0)
			return (1);
	}
	return (-1);
}
