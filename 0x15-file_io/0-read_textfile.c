#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @letters: number of letters to b e read and printed
 * @filename: pointer to the name of the file to be printed
 * Return: actual number of
 * letters it could read and print, 0 if fileame is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t *buffer;
	ssize_t file_descriptor;
	size_t bytes_read;
	ssize_t bytes_writen;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	bytes_read = read(file_descriptor, buffer, letters);
	bytes_writen = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(file_descriptor);
	return (bytes_writen);
}
