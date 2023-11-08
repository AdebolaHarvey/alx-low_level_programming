#include "function_pointers.h"

/**
 * int_index - Searches fir an integer.
 * @array: The pointer to array.
 * @size: Size of integer.
 * @cmp: The pointer to the function.
 *
 * Return: The integer value.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (size > x)
			{
				if (cmp(array[x]))
					return (x);

				x++;
			}
		}
	}

	return (-1);
}
