#include "main.h"

/**
 * more_numbers - function that prints 10 times numbers from 0 to 14.
 *
 * Return: Always 0 (Success).
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar('i);
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
