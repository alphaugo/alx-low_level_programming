#include "variadic_functions.h"
/**
 * print_numbers - function
 * @separator: parameter
 * @n: parameter
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count;

	va_list pi;

	if (n > 0)
	{
		va_start(pi, n);

		while (count < n)
		{
			printf("%d", va_arg(pi, int));

			if (count != n - 1 && separator != NULL)
				printf("%s", separator);
			count++;
		}
		printf("\n");
	}
}

