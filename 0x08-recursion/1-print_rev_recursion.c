#include "main.h"

/**
 * _puts_recursion -  function that reverses a string.
 * @s: string to be printed
 *
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
}
