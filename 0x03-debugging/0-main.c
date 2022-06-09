#include "main.h"

int main(void)
{
	int i;
	i = 98;
	positive_or_negative(i);

	if (positive_or_negative() > 0)
		printf("positive \n");
	else if (positive_or_negative() < 0)
		printf("negative \n");
	else printf("zero \n");
}
