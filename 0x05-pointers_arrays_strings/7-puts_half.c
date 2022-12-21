#include "main.h"
/**
 * puts_half - prrint a half of astring
 * @str: pointer to a string
 */
void puts_half(char *str)
{
	int size, i;

	for (size = 0; str[size] != 0; size++)
		;
	if (size % 2 == 0)
		i = size / 2;
	else
		i = size - ((size - 1) / 2);
	for (; i < size ; i++)
		_putchar(str[i]);
	_putchar(10);
}
