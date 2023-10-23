#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: returns a pointer to the allocated memory
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr =  malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
