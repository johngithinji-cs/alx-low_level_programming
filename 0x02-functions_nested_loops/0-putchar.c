#include <stdio.h>
/**
 * main - Entry point
 * Description: Program to print _putchar and move to the next line
 * Return: Always (success)
 */
int main(void)
{
	char text[9] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(text[i]);
	}
	_putchar("\n");
	return (0);
}
