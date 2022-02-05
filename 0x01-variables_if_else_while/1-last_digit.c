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
	int l;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, l);
		printf("\n");
	}
	if (l == 0)
	{
		printf("Last digit of %d is %d and is 0", n, l);
		printf("\n");
	}
	if (l < 6 && l != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, l);
		printf("\n");
	}
	return (0);
	}
