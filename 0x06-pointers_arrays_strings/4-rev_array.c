#include "main.h"

/**
 * reverse_array - reverse the content of an array of int
 * @a: array
 * @n: n numbers of elements
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	j = n - 1;

	for (i = 0; i < j; j++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
