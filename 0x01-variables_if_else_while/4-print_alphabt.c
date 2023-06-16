#include <stdio.h>
/**
 * main - Lowercase Alphabets
 *
 * Return: Always 0 (Success)
*/

/* Printing alphabets in lower case */
int main(void)
{
	char al;
	{
	for (al = 'a'; (al <= 'z'); al++)
		if (al != 'q' && al != 'e')
		{
		putchar(al);
	}
	}
		putchar('\n');
	return (0);
}
