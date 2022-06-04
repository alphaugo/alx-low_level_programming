#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Prints a random number and sates weather
 *          it is positive, negative, or zero.
 *
 * Return: always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 1)
		printf(" %d is positve \n", n);
	else if (n < 0)
		printf("%d is negative\n", n);

	else
		printf(" %d is negative\n", n);

	return (0);
}
