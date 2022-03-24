#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 *                  of a string to uppercase.
 * @str: The string to be changed.
 *
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *s)
{
	int x = 0;

	while (*(s + x))
	{
		if (*(s + x) >= 'a' && *(s * x) <= 'z')
			*(s + x) -= 'a' - 'A';

		x++;
	}

	return (s);
}
