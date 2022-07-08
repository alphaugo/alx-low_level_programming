#include "variadic_functions.h"
/**
 * print_strings - function
 * @separator: parameter
 * @n: parameter
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strg;
	unsigned int check;
	char *string;

	if (n > 0)
	{
		va_start(strg, n);

		while (check < n)
		{
			string = va_arg(strg, char *);

			if (string == NULL)
				printf("(nil)");
			else
				printf("%s", string);

			if (check != n -1 && separator != NULL)
				printf("%s", separator);

			check++;
		}
		va_end(strg);
	}
	printf("\n");
}
