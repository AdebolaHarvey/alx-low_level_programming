#include "main.h"
#include <stdlib.h>

/**
  * _calloc - Allocates memory for an array, using malloc.
  * @nmemb: Number of members of elements.
  * @size: Size of bytes.
  *
  * Return: Nothing.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a = 0, b = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	b = nmemb * size;
	p = malloc(b);

	if (p == NULL)
		return (NULL);

	while (a < b)
	{
		p[a] = 0;
		a++;
	}

	return (p);
}
