#include "main.h"
#include <stdlib.h>

/**
  * array_range - Creates array of integers
  * @min: Minimum value.
  * @max: Maximum value.
  *
  * Return: Newly created array value.
  */
int *array_range(int min, int max)
{
	int *x, a = 0;

	if (min > max)
		return (NULL);

	x = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (x == NULL)
		return (NULL);

	while (min <= max)
	{
		x[a] = min;
		a++;
		min++;
	}

	return (x);
}
