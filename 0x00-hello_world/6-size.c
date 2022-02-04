#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: "size of various types on the computer it is compiled and run
 * on"
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	printf("Size of a char: 1 byte(s)\n");
	printf("Size of an int: 4 byte(s)\n");
	printf("Size of a long int: %zu byte(s)\n");
	printf("Size of a long long int: 8 byte(s)\n");
	printf("Size of a float: 4 byte(s)\n");
	return (0);
}
