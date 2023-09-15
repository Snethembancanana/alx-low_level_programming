#include <stdio.h>

/**
 * main - program that prints the numbers from 1 to 100;
 * But for multiples of three print Fizz
 * for the multiples of five print Buzz
 * For numbers which are multiples of both three and five print FizzBuzz
 * Return: return (0)
 */

int main(void)
{
	int value;

	for (value = 1; value <= 100; value++)
	{
		if ((value % 3) == 0 && (value % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((value % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((value % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", value);
		}
		if (value == 100)
			continue;
		printf(" ");
	}
	printf("\n");

	return (0);
}
