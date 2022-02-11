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

	if (size <= 0)
	{
		_putchar(10);
	}


	for (i = 0 ; i < size ; i++)
	{
		for (j = 1 ; j <= size - i ; j++)
		{
			_putchar(32);
		}
		for (j = 0; j <= i ; j++)
		{
			_putchar('#');
		}
		_putchar(10);
	}
}
