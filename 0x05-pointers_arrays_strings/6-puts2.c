#include "main.h"

/**
 * puts2 - "prints every other character of a string"
 *
 * @str: character to check
 *
 * Return: Always (0)
 */

void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		i++;
		str += 2;
	}
	_putchar(10);
}
