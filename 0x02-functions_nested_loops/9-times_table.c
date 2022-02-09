#include "main.h"

/**
 * times_table - "prints every minute of the day from 00:00 to 23:59"
 *
 * Return: Always (0)
 */

void times_table(void)
{
	int i;
	int j;
	int p;

	for  (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			p = (i * j);

			if (j == 0)
			{
				_putchar('0' + p);
			}
			else if (p <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + p);
			}
			else if (p > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
