#include "main.h"

/**
 * get_endianness - prog checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int t;
	char *o;

	t = 1;
	o = (char *)&t;
	return (*o);
}
