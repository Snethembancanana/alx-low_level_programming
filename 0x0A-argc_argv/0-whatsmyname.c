#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 *
 * @argc: number of command line arguments.
 * @argv: array that contains the commmand line argu..
 *
 * Return: (0)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
