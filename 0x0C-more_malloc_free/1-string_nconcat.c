#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: Maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenation;
	unsigned int l = n, index;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index = 0; s1[index]; index++)
		l++;
	concatenation = malloc(sizeof(char) * (l + 1));
	if (concatenation == NULL)
		return (NULL);
	l = 0;
	for (index = 0; s1[index]; index++)
		concatenation[l++] = s1[index];
	for (index = 0; s2[index] && index < n; index++)
		concatenation[l++] = s2[index];

	concatenation[l] = '\0';
	return (concatenation);
}
