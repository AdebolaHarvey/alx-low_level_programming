#include "main.h"

/**
 * append_text_to_file - Append text at the end
 * of a file.
 * @filename: The name of file.
 * @text_content: Content of a file.
 *
 * Return: Success (1) and faliure (-1).
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d;
	int num_letter;
	int data_written;

	if (!filename)
		return (-1);

	file_d = open(filename, O_WRONLY | O_APPEND);

	if (file_d == -1)
		return (-1);

	if (text_content)
	{
		for (num_letter = 0; text_content[num_letter]; num_letter++)
			;
		data_written = write(file_d, text_content, num_letter);

		if (data_written == -1)
			return (-1);
	}
	close(file_d);
	return (1);
}
