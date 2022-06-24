#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function to be called upon execution
 *
 * @argc: runtime argument for printing the number of
 *  commands in the command line
 *  @argv: runtime argument also that prints the strings on command line
 *
 *  Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
/* atoi convert a string to an int */
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);
	return (0);
}
