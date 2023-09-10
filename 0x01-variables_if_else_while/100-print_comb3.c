#include <stdio.h>
/**
 * main - Entry point
 * Return: Always return (0) for the program to be successful
 */

int main(void)
{
	int single = '0';
	int doubles = '0';

	for (single = '0'; single <= '9'; single++)
	{
		for (doubles = '0'; doubles <= '9'; doubles++)
		{
			if (doubles > single)
			{
				putchar(single);
				putchar(doubles);
				if (!(single == '9' && doubles == '8'))
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
