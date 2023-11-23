#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at given index.
 * @n: Pointer to number being set.
 * @index: Indexat which to set bit.
 * Return: Success (1) or if it failed -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	bit = 1 << index;
	*n = *n | bit;
	return (1);
}
