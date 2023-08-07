#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a trct file and printsit to the POSIX stdout
 * @filename: ointer to name of the file
 * @letters: number of leters to be read from the and printed
 *
 * Return: actual number of letters that could be read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t write_let;
	ssize_t read_let;
	char *buff;

	/*buff = (char *)malloc(sizeof(char) * letters);*/
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	read_let = read(fd, buff, letters);

	write_let = write(STDOUT_FILENO, buff, read_let);

	free(buff);
	close(fd);

	return (write_let);
}
