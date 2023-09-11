#include <stdio.h>
/**
 * main - Entry point
 * Return: return (0)
 */

int main(void)
{
	int z;
	int a;
	int b;
	int c;

	for (z = 96; z < 99; z++)
	{
		for (a = 97; a < 99; a++)
		{
			for (b = 98; b < 99; b++)
			{
				for (c = 99; c < 100; c++)
				{
					if (c > b && b > a && a > z)
					{
						putchar(z);
						putchar(a);
						putchar(b);
						putchar(c);
						if (z != 80 || a != 81 || b != 82)
						{
							putchar(' ');
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
