#include "main.h"

int _sqrt_official(int n, int i);

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: numbers to calculate the natural square root
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_official(n, 1));
}

/**
 * _sqrt_official - calculates the natural square root
 * @n: number to calculate the natural square root
 * @i: iterate number
 * Return: natural square root
 */

int _sqrt_official(int n, int i)
{
	int sqrt = i * i;

	if (n < sqrt)
	{
		return (-1);
	}
	if (n == sqrt)
	{
		return (i);
	}
	return (_sqrt_official(n, i + 1));
}
