#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int tempry = *a;
	*a = *b;
	*b = tempry;
}
