#include <stdio.h>

/**
 * main - Prints the name of the file it was compiled
 * from, followed by new line.
 *
 * Return: Always 0 (success).
 */

int main(void)
{
	printf("%s/n", __FILE__);

	return (0);
}
