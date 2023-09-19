#include "main.h"

/**
 * print_array - print n elements of an array
 * followed by a new line.
 *@a: pointer var
 *@n: n elements
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
