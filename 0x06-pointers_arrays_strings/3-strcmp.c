#include "main.h"

/**
 * _strcmp - compare string values
 * @s1: first input value
 * @s2: second inut value
 * Return: s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
		if (s1[i] == '\0')
			return (0);
	return (s1 - s2);
}
