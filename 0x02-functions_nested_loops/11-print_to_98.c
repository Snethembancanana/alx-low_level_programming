#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers.
 *@n: char will be checked
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		printf("natural number is %d and is less than 98\n", n);
		n++;
	}
	else if (n == 98)
	{
		printf("natural number is %d is 98\n", n);
	}
	else
	{
		printf("natural number is %d and is greater than 98\n", n);
		n--;
	}
}

