#include "main.h"

/**
 * print_diagonal - "draws a diagonal line"
 *
 * @n: checks the character"
 *
 * Return: Always (0)
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar(10);
	}

	for (i = 0 ; i < n ; i++)
	{
		if (i == 0)
		{
			_putchar(92);
		}
		else
		{
			for (j = 0 ; j < i ; j++)
			{
				_putchar(' ');
				if (j == i - 1)
				{
					_putchar(92);
				}
			}
		}
		_putchar(10);
	}
}
