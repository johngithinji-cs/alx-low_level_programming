#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of arguments supplied to the program.
 * @argv: An arry of pointers to the arguments.
 *
 * Return: Always true.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
