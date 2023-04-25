#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format : list of types of arguments passed
 *
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int len = 0;
	char *sep;
	char *str;

	va_start(list, format);
	sep = "";

	if (format)
	{
		while (format[len] != '\0')
		{
			switch (format[len])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					len++;
					continue;
			}
			sep = ", ";
			len++;
		}
	}
	va_end(list);
	printf("\n");
}
