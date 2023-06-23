#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int f, j;

	f = 0;
		while (f < 24)
		{
			j = 0;
			while (j < 60)
			{
				_putchar((f / 10) + '0');
				_putchar((f % 10) + '0');
				_putchar(':');
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
				_putchar('\n');
				j++;
			}
			f++;
		}
}
