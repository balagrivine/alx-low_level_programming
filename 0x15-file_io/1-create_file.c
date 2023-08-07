#include "main.h"


/**
 * create_file - creates a file
 * @filename: pointer to the file to be created
 * @text_content: NULL terminated string to write the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	int wrte;
	int count;


	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content)
	{
		for (count = 0; text_content[count];)
		{
			count++;
		}
	}
	else
	{
		file = open(filename, O_CREAT || O_RDWR);
	}
	
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC);

	wrte = write(file, text_content, count);

	if (file == -1 || wrte == -1)
	{
		return (-1);
	}

	close(file);
	return (1);
	
}
