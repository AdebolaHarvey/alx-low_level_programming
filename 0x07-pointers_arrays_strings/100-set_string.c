#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Value of a pointer
 * @to: Value of a char.
 * Return: Void.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
