#include "main.h"

/**
 * append_text_to_file - appends text at te end of aa file
 * @filename: name of the file
 * @text_content: NULL terminated string
 * of characters to add a the end of the file
 * Return: 1 on success and 0 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, bytes_writen, length = 0;

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
	bytes_writen = write(file, text_content, length);

	if (file == -1 || bytes_writen == -1)
	{
		return (-1);
	}
	close(file);
	return (1);
}
