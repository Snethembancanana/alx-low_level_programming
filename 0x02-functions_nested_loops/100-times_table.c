#include "main.h"
/**
 * print_times_table - print nothing if n > 15 or n < 0.
 * @n: check the code
 */

void print_times_table(int n)
{
	if (n =>0; n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for ( b = 0; b <= n; b++)
			{
				c = a * b;
				if (a ==0)
				{
					_putchar(c + '0');
				}
				else if (c < 10 && b !=0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(c + '0');
				}
				else if (c >= 10 && c < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
				}
				else if (if >=  100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((c / 100) + '0');
					_putchar((c / 10) % 10 + '0');
					_putchar((c % 10 + '0');
							}
		