#include "main.h"

/**
 * _strcat - concatenates two strings and arrays.
 * @dest: input value of strings.
 * @src: input value of arrays.
 * Return: Always Success.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
	i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
