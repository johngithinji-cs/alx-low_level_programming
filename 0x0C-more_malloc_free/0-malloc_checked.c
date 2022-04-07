#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - funcion that allocates memory
 * @b : variable to be assigned memory space.
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (memory == NULL)
		exit(98);
	return (memory);
}
