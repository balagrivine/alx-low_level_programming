#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)

{
	int j;
	int i;
	int tens1;
	int ones1;
	int tens2;
	int ones2;

	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			tens1 = i / 10;
			ones1 = i % 10;
			tens2 = j / 10;
			ones2 = j % 10;

			putchar('0' + tens1);
			putchar('0' + ones1);
			putchar(' ');
			putchar('0' + tens2);
			putchar('0' + ones2);

			if (i < 99 || j < 99)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
