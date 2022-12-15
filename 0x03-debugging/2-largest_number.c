#include "main.h"

/**
 * largest_number - return the largest umber of 3
 * @a: number1
 * @b: number2
 * @c:number3
 * Return largest one
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if(b > a && b >c)
	{
		largest = b;
	}
	else
	{
		largest =c;
	}
	return (largest);
}
