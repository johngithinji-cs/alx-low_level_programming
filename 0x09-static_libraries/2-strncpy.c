#include "main.h"

/**
 *  _strncpy - Copies at most an inputted number
 *            of bytes from string src into dest.
 *@dest : holds the string to be copied
 *@src: source of string
 *@n: number of string to be copied from src to dest
 *Return: pointer to the resulting dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0, length = 0;

	while (src[x++])
		length++;
	for (x = 0; src[x] && x < n; x++)
		dest[x] = src[x];
	for (x = length; x < n; x++)
		dest[x] = '\0';
	return (dest);
}
