#include "main.h"
#include <stdlib.h>

/**
 * main - copies the content of a file to another
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments passed to the program
 *
 * Return: 1 on success
 */

int main(int argc, char *argv[])
{
	int src, dest, wrte, rd;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buff(argv[2]);
	src = open(argv[1], O_RDONLY);
	rd = read(src, buffer, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);

	while (rd > 0)
	{
		if (src == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		wrte = write(dest, buffer, 1024);
		if (dest == -1 || wrte == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		rd = read(src, buffer, 1024);
		wrte = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(buffer);
	close_file(src);
	close_file(dest);

	return (1);
}
