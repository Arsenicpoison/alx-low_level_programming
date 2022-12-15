#include "main.h"

/**
 * print_alphabet_x10 - print ten times the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	int letter, let;

	for (let = 0; let < 10; let++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
