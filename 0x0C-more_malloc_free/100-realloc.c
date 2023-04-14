#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size, of the allocated space for ptr in bytes
 * @new_size: new size, of the new memory block in bytes
 *Return: pointer to the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int count;
	char *answer;

	count = 0;
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		answer = malloc(new_size);
		if (answer == NULL)
		{
			return (NULL);
		}
		return (answer);
	}
	answer = malloc(new_size);
	if (answer == NULL)
	{
		return (NULL);
	}
	while (count < old_size && count < new_size)
	{
		answer[count] = ((char *)ptr)[count];
		count++;
	}
	free(ptr);
	return (answer);
}
