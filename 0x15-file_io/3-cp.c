#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

/**
 * close_file - closes file descriptor
 * @file: the file descriptor to be closed
 *
 * Return: void
 */
void close_file(int file) {
    if (close(file) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
        exit(100);
    }
}

/**
 * main - copies the content of a file to another
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments passed to the program
 *
 * Return: 0 on success, 97 on incorrect arguments, 98 on read error, 99 on write error, 100 on close error
 */
int main(int argc, char *argv[])
{

	int src, dest;
	char buffer[1024];
	ssize_t bytesRead;
	ssize_t bytesWritten;

    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        return 97;
    }

    src = open(argv[1], O_RDONLY);
    if (src == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        return 98;
    }

    dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (dest == -1) {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        close_file(src);
        return 99;
    }

    while ((bytesRead = read(src, buffer, sizeof(buffer))) > 0) {
        bytesWritten = write(dest, buffer, bytesRead);
        if (bytesWritten != bytesRead) {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            close_file(src);
            close_file(dest);
            return 99;
        }
    }

    if (bytesRead == -1) {
        dprintf(STDERR_FILENO, "An error occurred while reading from %s: %s\n", argv[1], strerror(errno));
        close_file(src);
        close_file(dest);
        return 98;
    }

    close_file(src);
    close_file(dest);

    return 0;
}

