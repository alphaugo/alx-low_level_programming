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
	int my_counter;

	for (my_counter = 0; my_counter < argc; my_counter++)
		printf("%s\n", argv[my_counter]);
}

