#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_all - Prints all formats
  * @format: The conversion specified to prints.
  *
  * Return: Nothing
  */
void print_all(const char * const format, ...)
{
	va_list args;
	form_dngz form_types[] = {
		{ "c", print_the_char },
		{ "i", print_the_integer },
		{ "f", print_the_float },
		{ "s", print_the_char_ptr }
	};
	unsigned int x = 0;
	unsigned int y = 0;
	char *separator = "";

	va_start(args, format);

	while (format != NULL && format[x])
	{
		y = 0;
		while (y < 4)
		{
			if (format[x] == *form_types[y].identifier)
			{
				form_types[y].f(separator, args);
				separator = ", ";
			}
			y++;
		}
		x++;
	}

	va_end(args);
	printf("\n");
}

/**
  * print_the_char - Prints a character of char type
  * @separator: The separator of the character
  * @args: A list of variadic arguments
  *
  * Return: Nothing
  */
void print_the_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
  * print_the_integer - Prints a character of integer type
  * @separator: The separator of the character
  * @args: A list of variadic arguments
  *
  * Return: Nothing
  */
void print_the_integer(char *separator, va_list args)
{
	printf("%s%i", separator, va_arg(args, int));
}

/**
  * print_the_float - Prints a character of float type
  * @separator: The separator of the character
  * @args: A list of variadic arguments
  *
  * Return: Nothing
  */
void print_the_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
  * print_the_char_ptr - Prints the content of pointer to char type
  * @separator: The separator of the character
  * @args: A list of variadic arguments
  *
  * Return: Nothing
  */
void print_the_char_ptr(char *separator, va_list args)
{
	char *arg = va_arg(args, char *);

	if (arg == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}

	printf("%s%s", separator, arg);
}	
