#include "main.h"
/**
 * jack_bauer - priints every minute of the day of jack bauer
 *
 * @
 *
 * Return: always 0 (success)
 */

void jack_bauer(void)
{

	int a, b, c, d;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					if (a >= 2 && b >= 4)
						break;
					_putchar(a + 48);
					_putchar(b + 48);
					_putchar(':');
					_putchar(c + 48);
					_putchar(d + 48);
					_putchar('\n');
				}
			}
		}
	}

}
