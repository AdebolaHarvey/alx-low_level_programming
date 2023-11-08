#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a
 * parameter onbeach element of an array.
 * @array: The pointer of an array.
 * @size: Size of the element.
 * @action: The pointer to the function.
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (size > x)
		{
			action(array[x]);
			x++;
		}
	}
}
