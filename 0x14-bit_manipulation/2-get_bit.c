#include "main.h"
#include <stdio.h>

/**
 * get_bit - Returns the value of bit at a given index.
 * @n: Given value to check bits.
 * @index: Index to check bit.
 *
 * Return: Value of bit at indecx or -1.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, ch;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	ch = n & div;
	if (ch == div)
		return (1);
	return (0);
}
