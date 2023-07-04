#include "main.h"

/**
 * *_strstr - finds the first occurence of the substring needle
 * in the string haystack. the terminating null bytes (\0) are not compared
 *
 * @haystack: string
 * @needle: substring
 * Return: needle
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
