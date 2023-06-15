#include <unistd.h>
#include <sys/syscall.h>
/**
 * main - Entry point
 *
 * Return: always 1 (success)
 */

int main(void)
{
	const char *message = "and that piece of art is useful
	\" - Dora Korpar, 2015-10-19\n";
	syscall(SYS_write, 1, message, 42);
	 return (0);
}

