#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * for the program 101-crackme.
 * Return: (0).
 */

int main(void)
{
	int password[100];
	int index, sum, n;

	sum = 0;

	srand(time(0));

	for (index = 0; index < 100; index++)
	{
		password[index] = rand() % 78;
		sum += (password[index] + '0');
		putchar(password[index] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}

