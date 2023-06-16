#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always (0) success
 */

int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}

	return (0);
}
