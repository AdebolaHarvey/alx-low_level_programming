#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string.
 * @s: The value of the string.
 * @c: The value of the character.
 * Return: The character c in string or NULL.
 */

char *_strchr(char *s, char c)

{
	int b;

	for (b = 0; s[b] >= '\0'; b++)
	{
		if (s[b] == c)
			return (s + b);
	}

	return (NULL);
}
