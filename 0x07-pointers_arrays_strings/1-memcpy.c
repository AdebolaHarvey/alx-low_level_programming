#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Copies memory area.
 * @dest: Destination memory area.
 * @src: The source memory.
 * @n: The number of byte.
 * Return: The destination area (dest).
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];
	return (dest);
}
