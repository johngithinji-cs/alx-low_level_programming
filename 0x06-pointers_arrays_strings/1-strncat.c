#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: destination string
 * @src: source
 * @n: amount of bytes used from src
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	while (dest[x] != '\0')
		x++;
	y = 0;
	while (src[y] != '\0' && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	return (dest);
}
