#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to the name of the file being created
 * @text_content: poiuter to the texr to be included in the file created
 * Return: 1 on succes and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_des, bytes_writen, length = 0;

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
	file_des = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytes_writen = write(file_des, text_content, length);

	if (file_des == -1 || bytes_writen == -1)
	{
		return (-1);
	}
	close(file_des);
	return (1);
}
