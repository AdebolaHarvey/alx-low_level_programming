#include "main.h"
#include <stdio.h>

/**
 * clear_bit - Sets the value of the bit to 0
 * at a given index.
 * @n: Number to clear.
 * @index: Index at which the bit is cleared.
 * Return: Success (1), or -1 if it failed.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
