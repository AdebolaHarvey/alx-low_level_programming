#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Value of memory allocated.
 * Return: Nothing.
 */

void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);

	if (x == NULL)
		exit(98);

	return (x);
}
