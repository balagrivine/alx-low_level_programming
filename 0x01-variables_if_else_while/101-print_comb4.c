#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */

int main(void)

{
	int a;
	int b;
	int c;

	for (a = 0; a < 8; a++)
	{
		for (b = 1; b < 9; b++)
		{
			for (c = 2; c < 10; c++)
			{
				putchar('0' + a);
				putchar('0' + b);
				putchar('0' + c);
				putchar(',');
				putchar(' ');

			}
		}
	}
	putchar('\n');
	return (0);
}
