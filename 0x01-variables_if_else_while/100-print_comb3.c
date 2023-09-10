#include <stdio.h>
/**
 * main - Entry point
 * Return: Always return (0) for the program to be successful
 */

int main(void)
{
	int zeros = '0';
	int doubles = '0';

	for (zeros = '0'; zeros <= '9'; zeros++)
	{
		for (doubles = '0'; doubles <= '9'; doubles++)
		{
			if (doubles > zeros)
			{
				putchar(zeros);
				putchar(doubles);
				if (!(zeros == '9' && doubles == '8'))
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
