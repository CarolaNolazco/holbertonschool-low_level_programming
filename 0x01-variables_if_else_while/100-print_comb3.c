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

	for (i = 48 ; i < 58 ; i++)
	{
		for (j = i + 1 ; j < 58 ; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 56)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
