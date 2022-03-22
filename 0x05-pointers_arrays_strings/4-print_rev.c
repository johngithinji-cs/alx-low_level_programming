#include "main.h"

/**
 * print_rev - func that prints a string, in reverse, followed by a new line
 * @s: declaration of s and paramters for the function as in the quiz
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int c = 0;
	int i = 0;
	int total_characters = 0;

	while (s[i] != 0)
		total_characters++;
	for (c = 0; c <= total_characters - 1; c++)
		_putchar(s[c]);
	_putchar('\n');
}
