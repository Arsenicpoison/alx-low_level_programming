#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - prints numbers followed by new line
 * @separator: string to print
 * @n: number of integers passed to the function
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int count = 0;

	va_start(list, n);
	while (count < n)
	{
		printf("%d", va_arg(list, int));
		if (count < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		count++;
	}
	va_end(count);
	printf("\n");
}
