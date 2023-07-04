#include "main.h"

/**
 * _strspn - returns the number of bytesin the initial
 * segment of s which consists only of bytes from accept
 *
 * @s: intial segment
 * @accept: consistent
 * Return: Always s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s && *accept)
	{
		if (*s == *accept)
		{
			count++;
			accept++;
		}
		s++;
	}
	return (count);
}
