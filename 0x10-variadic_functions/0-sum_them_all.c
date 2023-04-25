#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: count of numbers to add
 * Return: sum or all parameters or 0 if n=0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i = 0, sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(arg, n);
	for (; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}
