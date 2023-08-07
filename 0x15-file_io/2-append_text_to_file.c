#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to the name of the file to be created
 * @text_content: pointer to the text to be appended to the end of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int wrte;
	int length;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content)
	{
		for (length = 0; text_content[length];)
		{
			length++;
		}
	}

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		wrte = write(file, text_content, length);

		if (wrte == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);

}
