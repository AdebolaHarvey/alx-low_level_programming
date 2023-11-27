#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - Read a text file and print it
 * to the POSIX standard output.
 * @filename: The file name.
 * @letters: The number of letters to print.
 *
 * Return: 0 or actual number of letters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_a;
	ssize_t data_read, data_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_a = open(filename, O_RDONLY);

	if (file_a == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	data_read = read(file_a, buffer, letters);
	data_written = write(STDOUT_FILENO, buffer, data_read);
	close(file_a);
	free(buffer);

	return (data_written);
}
