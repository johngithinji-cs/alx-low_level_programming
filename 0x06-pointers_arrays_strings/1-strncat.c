#include "main.h"

/**
 *_strncat - Concatenates two strings using at most
 *            an inputted number of bytes from src.
 *@dest: destnation pointer
 *@src: pointer to a string
 *@n: number of string to be appended to dest
 *Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, length = 0;

	while (*src)
		length++;
	for (x = 0; src[x] && x < n; x++)
		*dest[length++] = *src[x];
	return (dest);
}
