#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Changes all lowercase letters
 * of a string to uppercase.
 * @x: The string value.
 * Return: The string value x.
 */

char *string_toupper(char *x)

{
	int j;

	j = 0;

	while (x[j] != '\0')
	{
		if (x[j] >= 'a' && x[j] <= 'z')
			x[j] = x[j] - 32;
		j++;
	}
	return (x);
}
