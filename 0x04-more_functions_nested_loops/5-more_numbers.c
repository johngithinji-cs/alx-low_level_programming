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
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar('i);
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
