#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	char r = 0, d;

	while (r < 10)
	{
		d = 'a';
			while (d <= 'z')
			{
				_putchar(d);
				d++;
			}
		_putchar('\n');
			r++;
	}
}
