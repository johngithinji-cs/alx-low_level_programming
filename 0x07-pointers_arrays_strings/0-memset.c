#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 *          pointed to by @s with the constant byte @c.
 * @s: A pointer to the memory area to be filled.
 * @b: The character to be filled in the memory area.
 * @n: the number of bytes to be filled.
 *
 * Return: A pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s;
	unsigned char value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;
	return (memory);
}

