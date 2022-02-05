#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: "Prints the alphabet in lower case"
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	i = 97;
	while (i < 123)
	{
		if (i != 113 && i != 101)
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
