#include "main.h"

/**
 * print_array - print n element of an array
 * @n:number of element
 * @a:pointer to an array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
