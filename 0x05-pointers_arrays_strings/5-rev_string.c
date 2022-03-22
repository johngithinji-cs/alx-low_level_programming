#include <stdio.h>
/**
 * rev_string - function that reverses a string.
 * @s: declaration of *s and paramters for the function in question
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i, y, x;
	char t;
	
	x = 0;
	y = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	y = x - 1;
	for (i = 0; i < x / 2; x++)
	{
		t = s[i];
		s[i] = s[y];
		s[y--] = t;
	}
}
