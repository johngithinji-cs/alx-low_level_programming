#include "main.h"

/**
 * print_alphabet_x10: print_alphabet_x10 - function to print abc 10 times
 * Description: prints 10 times the alphabet, in lowercase, followed by a line
 * Return: Always (success)
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	}
}
