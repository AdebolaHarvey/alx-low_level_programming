#include "main.h"
#include <stdio.h>

/**
 * _memset - Fills memory with constant byte.
 * @s: The pointed value.
 * @b: Tge constant byte.
 * @n: the number of byte.
 * Return: The pointed value of s.
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;
	return (s);
}
