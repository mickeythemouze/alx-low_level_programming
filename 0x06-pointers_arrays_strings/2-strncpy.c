#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: input the value of a string.
 * @src: inpu the value.
 * @n: input the total value.
 * Return: Always success.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[j] = src[j];
	j++;
	}
	while (j < n)
	{
	dest[j] = '\0';
	j++;
	}
	return (dest);
}
