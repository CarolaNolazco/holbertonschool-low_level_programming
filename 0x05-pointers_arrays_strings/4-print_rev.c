#include "main.h"

/**
 * print_rev - "checks for lowercase character"
 *
 * @s: character to check
 *
 * Return: Always (0)
 */

void print_rev(char *s)
{
	int i = 0;
	int counter = i;

	while (*s != '\0')
	{
		_putchar(*s);
		i++;
		s++;
	}
	while (i >= 0)
	{
		_putchar(*s);
		counter--;
	}
	_putchar(10);
}
