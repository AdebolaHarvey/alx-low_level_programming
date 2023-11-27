#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: The name of the file to be created.
 * @text_content: Content of the file.
 *
 * Return: 1 (success) or -1 if failed.
 */
int create_file(const char *filename, char *text_content)
{
	int file_d;
	int num_letter;
	int data_written;

	if (!filename)
		return (-1);

	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_d == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (num_letter = 0; text_content[num_letter]; num_letter++)
		;
	data_written = write(file_d, text_content, num_letter);
	if (data_written == -1)
		return (-1);
	close(file_d);

	return (1);
}
