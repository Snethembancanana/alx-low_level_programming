#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int z;
	int o;
	int t;

	if (z = 0; z <= 789; z++)
	{
		if (o = 0; o <= 789; o++)
		{
			if (t = 0; t <= 789; t++)
			{
				if (z < o < t)
				{
					putchar(z);
					putchar(o);
					putchar(t);
					if (!(z == 789 && o == '248' && t == '358'))
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
