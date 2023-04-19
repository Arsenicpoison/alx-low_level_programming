#include "function_pointers.h"
/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to func
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int index;

if (array == NULL || cmp == NULL)
return (-1);

for (index = 0; index < size; index++)
{
if (cmp(array[index]) != 0)
return (index);
}

return (-1);

}
