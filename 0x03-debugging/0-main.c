#include "main.h"
/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/
int main(void)
{

	if (positive_or_negative() > 0)

		printf("positive \n");


	else if (positive_or_negative() < 0)

		printf("negative \n");


	else
		printf("zero \n");

}
