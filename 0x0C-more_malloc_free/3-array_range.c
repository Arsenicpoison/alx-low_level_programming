#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers with values from min to max
 * @min: minimum value contained in array
 * @max: maximum value contained in array
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int range;
	int *point;
	int count;

	if (min > max)
	{
		return (NULL);
	}
	range = max - min;
	point = malloc((range + 1) * sizeof(int));
	if (point == NULL)
	{
		return (NULL);
	}
	for (count = 0; (count <= range) && (min <= max); count++, min++)
	{
		point[count] = min;
	}

	return (point);
}
