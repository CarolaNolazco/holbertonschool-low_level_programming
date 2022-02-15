#include "main.h"
#include <stdio.h>

/**
 * print_array - "checks for lowercase character"
 *
 * @a: character to check
 *
 * @n: character to chech
 *
 * Return: Always (0)
 */

void print_array(int *a, int n)
{
	n = 0;

	while (n < 5)
	{
		printf("%d", *a);
		if (n != 4)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
		a++;
	}
	putchar(10);
}

