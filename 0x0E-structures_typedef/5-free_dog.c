#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - Function that frees dogs.
  * @d: The dog freed.
  *
  * Return: Nothing
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
