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

	for (i = 122 ; i > 96 ; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
