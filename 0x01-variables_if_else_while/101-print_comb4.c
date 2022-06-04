#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all posible combination of three different digits
 * 	  in ascending order sepersted by a commer followed by space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int b, e, n;

	for (b = 0; b < 10; b++)
	{
		for (e = 0; e < 10; e++)
		{
			for (n = 0; n < 10; n++)
			{
				putchar((b % 10) + '0');
				putchar((e % 10) + '0');
				putchar((n % 10) + '0');

				if (b == 7 && e == 8 && n == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
