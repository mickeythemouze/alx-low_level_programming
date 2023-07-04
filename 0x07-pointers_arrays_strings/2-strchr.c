#include "main.h"

/**
 * *_strchr - returns a pointer to the first occurence
 * of the character c in the string s or NULL if the character
 * is not found
 *
 * @s: string
 * @c: character
 * Return: Always s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
