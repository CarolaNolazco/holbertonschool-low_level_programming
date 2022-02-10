#include "main.h"

/**
 * more_numbers - "checks for lowercase character"
 *
 * Return: Always (0)
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 14 ; j++)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
		}
		_putchar(10);
	}
}
