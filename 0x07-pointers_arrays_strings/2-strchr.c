#include "main.h"

/**
 * _strchr - returns a pointer to the first occurence of the
 * character c in the string s
 * @c: parameter for c to return
 * @s: string to search character
 * Return: pointer to first occurence of character c or null if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
