#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copies a string.
 * @dest: The destination string value.
 * @src: The source string value
 * @n: Numbervof bytes
 * Return: The result of the string value dest.
 */

char *_strncpy(char *dest, char *src, int n)

{

	int i = 0, x = 0;

	while (src[i++])
		x++;
	for (i = 0; src[i] && i < n; i++)
		dest[x++] = src[i];
	for (i = x; i < n; i++)
		dest[i++] = '\0';
	return (dest);
}
