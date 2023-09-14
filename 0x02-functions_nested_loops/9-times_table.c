#include "main.h"
/**
 * times_table - function that prints the 9 times table
 */

void times_table(void)
{
	int vert;
	int hori;
	int outcome;
	int modulus;
	int whole;

	for (vert = 0; vert <= 9; vert++)
	{
		for (hori = 0; hori <= 9; hori++)
		{
			outcome = vert * hori;
			modulus = outcome % 10;
			whole = (outcome - modulus) / 10;

			if (hori == 0)
			{
				_putchar('0');
			}
			else if (outcome < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(modulus + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(modulus + '0');
			}
		}
		_putchar('\n');
	}
}

