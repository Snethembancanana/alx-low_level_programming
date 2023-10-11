#include "function_pointers.h"

/**
 * print_name - function that prints out a name
 * @name: name of a person
 * @f: holding the name of a string
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	(*f)(name);
}
