#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all parameters
 * @n: number of parameters passed to the function
 * @...: variable number of parameters
 * Return: if n == 0, (0)
 * otherwise the sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ab;
	unsigned int i, sum = 0;

	va_start(ab, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ab, int);

	va_end(ab);

	return (sum);
}
