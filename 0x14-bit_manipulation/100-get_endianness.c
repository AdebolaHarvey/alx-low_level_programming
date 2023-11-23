#include "main.h"

/**
 * get_endianness - Checks the endianness.
 * Return: Big endian (0), or 1 if little.
 */
int get_endianness(void)
{
	int j;
	char *k;

	j = 1;
	k = (char *)&j;
	return (*k);
}
