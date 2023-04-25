#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - prints strings follwowed by a new line
 * @separator: string to be printed
 * * @n: number of strings passed to the function
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int count = 0;
	char *str;

	va_start(list, n);

	while (count < n)
	{
		str = va_arg(list, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && count < n - 1)
		{
			printf("%s", separator);
		}
		count++;
	}
	va_end(list);
	printf("\n");
}
