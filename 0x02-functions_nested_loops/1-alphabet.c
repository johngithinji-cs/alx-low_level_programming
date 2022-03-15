#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: prints the alphabet, in lowercase, followed by a new line
 * Return - Always (success)
 */
void print_alphabet(void)
{
	char t;

	for (t = 'a'; t <= 'z'; t++)
	{
		_putchar(t);
	}
_putchar('\n');
}
