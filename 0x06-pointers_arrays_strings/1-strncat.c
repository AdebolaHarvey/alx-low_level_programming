#include "main.h"


/**
 * _strncat - Concatenates two strings.
 *
 * @dest: Destination value.
 * 
 * @src: The source value.
 *
 * @n: Number of bytes.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)

{

	int inx = 0, x = 0;

	while (dest[inx++])
		x++;
	for (inx = 0; src[inx] && inx < n; inx++)
		dest[x++] = src[inx];
	return (dest);

}
