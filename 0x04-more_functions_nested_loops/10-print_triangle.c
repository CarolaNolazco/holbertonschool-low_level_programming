#include "main.h"

/**
 * print_triangle - "prints a triangle"
 *
 * @size: character to check
 *
 * Return: Always (0)
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar(10);
	}


	for (i = 0 ; i < size ; i++)
	{
		for (j = 2 ; j <= size - i ; j++)
		{
			_putchar(' ');
		}
		for (k = 0 ; k <= i ; k++)
		{
			_putchar('#');
		}
		_putchar(10);
	}
}
