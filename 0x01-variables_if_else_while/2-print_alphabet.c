#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: "prints the alphabet in loweercase"
 *
 * Return: Always 0 (success)
 */

int main(void)

{
	int i;

	for (i = 97 ; i < 123 ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
