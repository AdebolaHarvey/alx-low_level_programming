#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 *
 * @s: The string value.
 * @accept: The substring value.
 * Return: s (accept) or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[a] != '\0'; a++)
		{
			if (s[a] == accept[b])
				return (s + b);
		}
	}

	return (NULL);
}
