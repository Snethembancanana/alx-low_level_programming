#include <stdio.h>

/**
 * main - prints all arguments it receives.
 *
 * @argc: number of command line argu..
 * @argv: array that contains the program command line arg.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
