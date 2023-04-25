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
	int length = 0;
	char *separ;
	char *str;

	va_start(list, format);
	separ = "";

	if (format)
	{
		while (format[length] != '\0')
		{
			switch (format[length])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", separ, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", separ, str);
					break;
				default:
					length++;
					continue;
			}
			separ = ", ";
			length++;
		}
	}
	va_end(list);
	printf("\n");
}
