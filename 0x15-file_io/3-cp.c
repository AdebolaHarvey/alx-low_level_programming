#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * file_error - Checks if file can be opened.
 * @file_from: First file.
 * @file_to: Second file.
 * @argv: Argument vector.
 *
 * Return: Nothing.
 */
void file_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Entry point.
 * @arg: Arguement.
 * @argv: Arguement vector.
 * Return: Always 0(Success).
 */
int main(int arg, char *argv[])
{
	int file_from, file_to, error_close;
	ssize_t num_char, data_written;
	char buffer[1024];

	if (arg != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_error(file_from, file_to, argv);

	num_char = 1024;
	while (num_char == 1024)
	{
		num_char = read(file_from, buffer, 1024);
		if (num_char == -1)
			file_error(1, 0, argv);
		data_written = write(file_to, buffer, num_char);
		if (data_written == -1)
			file_error(0, -1, argv);
	}

	error_close = close(file_from);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	error_close = close(file_to);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
