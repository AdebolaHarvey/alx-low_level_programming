#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _realloc - Reallocates a memory block using malloc and free
  * @ptr: Pointer to the memeory
  * @old_size: Old size in memory
  * @new_size: New size in memory
  *
  * Return: Nothing.
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nmptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		nmptr = malloc(new_size);

		if (nmptr == NULL)
			return (NULL);

		return (nmptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	nmptr = malloc(new_size);

	if (nmptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		nmptr[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (nmptr);
}
