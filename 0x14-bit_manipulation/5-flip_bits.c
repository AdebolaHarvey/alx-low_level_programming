#include "main.h"

/**
 * flip_bits - Returns the number of bits.
 * @n: The first number.
 * @m: The second number.
 * Return: Number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, cbt = 0;
	unsigned long int curnt;
	unsigned long int excl = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curnt = excl >> i;
		if (curnt & 1)
			cbt++;
	}
	return (cbt);
}
