#include <stdio.h>
/**
 * main - Entry point
 * Return: Always return (0) for the program to be successful
 */

int main(void)
{
	int z;
	int d;

	for (z = 48; z <= 56; z++)
	{
		for (d = 49; d <= 57; d++)
		{
			if (d > z)
			{
				putchar(z);
				putchar(d);
				if (!(z == 56 && d == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
