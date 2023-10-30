#include "main.h"
#include <stdlib.h>

/**
  * _strdup - Returns a pointer to a newly allocated space in memory.
  * @str: the string to duplicated.
  *
  * Return: the string duplicated
  */
char *_strdup(char *str)
{
	int a = 0, in = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[in])
	{
		in++;
	}

	s = malloc((sizeof(char) * in) + 1);

	if (s == NULL)
		return (NULL);

	while (a < in)
	{
		s[a] = str[a];
		a++;
	}

	s[a] = '\0';
	return (s);
}
