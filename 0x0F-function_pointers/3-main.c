#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - Entry point.
  * @argc: Arguement count.
  * @argv: Arguement vector.
  *
  * Return: Always 0(success).
  */
int main(int argc, char *argv[])
{
	int (*oprtn)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oprtn = get_op_func(argv[2]);

	if (!oprtn)
	{
		printf("Error\n");
		exit(99);
	}

		printf("%d\n", oprtn(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
