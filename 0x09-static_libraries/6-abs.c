#include "main.h"
/**
 * _abs - funtion that computes the absolute value of a integer.
 * @ab: char will be checked.
 * Return: Always return (0).
 */

int _abs(int ab)
{
	if (ab < 0)
	{
		int value = ab * -1;

		return (value);
	}
	else if (ab > 0)
	{
		int value = ab * 1;

		return (value);
	}
	else
		return (0);
}
