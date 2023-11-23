#include "main.h"

/**
 * binary_to_uint - Converts a binary to an unsigned int.
 * @b: Pointer to string containing binary number.
 * Return: Converted binary or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int numb;

	numb = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		numb <<= 1;
		if (b[i] == '1')
			numb += 1;
	}
	return (numb);
}
