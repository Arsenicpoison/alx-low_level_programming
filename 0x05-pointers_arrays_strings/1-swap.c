#include "main.h"

/**
 * swap_int - swap two values of type integer
 * @a: pointer to integer 1
 * @b: pointer to integer 2
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
