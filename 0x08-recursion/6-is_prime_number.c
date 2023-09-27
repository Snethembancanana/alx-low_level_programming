#include "main.h"
/**
 * prime_official - calculate if its a prime
 * @a: input
 * @b: divisor
 * Return: 0
 */

int prime_official(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_official(a, b + 1));
}

/**
 * is_prime_number - calculates a prime number
 * @n: input integer
 * Return: return 1 or 0
 */

int is_prime_number(int n)
{
	return (prime_official(n, 2));
}
