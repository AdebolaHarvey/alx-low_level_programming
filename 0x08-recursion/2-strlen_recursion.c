#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - A function that returns the length of a string.
 * @s: The length of the string.
 * Return: Value of integer.
 */
int _strlen_recursion(char *s)

{

	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
