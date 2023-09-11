#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int a;
	int b;
	int c;

	if (a = 48; a < 58; a++)
	{
		if (b = 49; b < 58; b++)
		{
			if (c = 50; c < 58; c++)
			{
				if (a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (!(a == 55 && b == 56 ))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
