#include "main.h"

/**
 *_putchar - This is my putchar
 */
int _putchar(char c)
{
	return write(STDOUT_FILENO, &c, 1);
}
