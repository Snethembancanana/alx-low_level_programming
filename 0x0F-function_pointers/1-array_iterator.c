#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array.
 * @array: array
 * @size: size of the array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int integer;

	if (array == NULL || action == NULL)
		return;

	for (integer = 0; integer < size; integer++)
	{
		action(*array);
		array++;
	}
}
