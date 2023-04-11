#include "main.h"

/**
 * _strlen -length of a string
 * @s:a pointer to an int that will be changed
 *
 *Return: void
 */
int _strlen(char *s)
{
	int k;

	for (k = 0; (*s++ != 0); )
		k++;
	return (k);
}
