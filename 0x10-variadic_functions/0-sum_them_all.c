#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function
 * @n: arg
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list pi;
	unsigned int counter;
	int sum = 0;

	va_start(pi, n);

	va_arg(pi, int);

	if(n == 0)
	{
		return (0);
	
		while(counter < n)
	
		{
		
			sum += va_arg(pi, int);
		
			counter++;
	
		}
	
		va_end(pi);
	
		return (sum);

	}

	return (0);
}
