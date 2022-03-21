#include "main.h"

/**
 * puts2 - func that prints 1 char/2 of a string, followed by a new line.
 * @str: declaration of str and paramters for the function puts2
 * Return: Always 0.
 */
void puts2(char *str)
{
	int x;
	char c;

	for (x = 0; str[x] != 0; x++)
	{
		if (x % 2 == 0)
		{
			c = str[x];
			_putchar(c);
		}
	}
	_putchar('\n');
}
