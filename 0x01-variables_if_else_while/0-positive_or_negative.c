#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: "The variable n will store a different value"
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
		printf("\n");
	}
	if (n == 0)
	{
		printf("%d is zero", n);
		printf("\n");
	}
	if (n < 0)
	{
		printf("%d is negative", n);
		printf("\n");
	}

	return (0);
}
