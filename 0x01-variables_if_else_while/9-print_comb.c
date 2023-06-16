#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar('0' + a);
		if (a == 9)
		{
			break;
		}
		putchar(',');
		putchar(' ');

	}
	putchar('\n');
	return (0);

}
