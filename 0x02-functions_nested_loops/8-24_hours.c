#include "main.h"

/**
 * jack_bauer - "prints every minute of the day from 00:00 to 23:59"
 *
 * Return: Always (0)
 */
void jack_bauer(void)
{
	int hours;
	int min;

	for (hours = 0 ; hours < 24 ; hours++)
	{
		for (min = 0 ; min  < 60 ; min++)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
