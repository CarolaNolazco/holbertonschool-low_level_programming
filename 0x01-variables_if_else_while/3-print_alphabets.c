#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: "prints the alphabet in loweercase and uppercase"
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 97 ; i < 123 ; i++)
	{
		putchar(i);
	}
	for (j = 65 ; i < 90 ; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
