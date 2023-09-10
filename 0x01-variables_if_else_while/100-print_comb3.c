#include <stdio.h>
/**
 * main - Entry point
 * Return: Always return (0) for the program to be successful
 */

int main(void)
{
	int singles = '0';
	int doubles = '0';

	for (singles = '0'; singles <= '9'; singles++)
	{
		for (doubles = '0'; doubles <= '9'; doubles++)
		{
			if (doubles > singles)
			{
				putchar(singles);
				putchar(doubles);
				if (!(singles == '9' && doubles == '8'))
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
