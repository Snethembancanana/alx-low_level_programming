#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives.
 *
 * @argc: number of command line argu..
 * @argv: array that contains the program command line arg.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
