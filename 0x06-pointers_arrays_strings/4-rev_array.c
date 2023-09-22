#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: base address.
 * @n: number of elements of an array.
 */

void reverse_array(int *a, int n)
{
	int index;
	char temp;

	for (index = 0; index < n--; index++)
	{
		temp = a[index];
		a[index] = a[n];
		a[n] = temp;
	}
}
