#include <stdio.h>

/**
 * main - prints  program that prints its name, followed by a new line
 * @argc: number of arguments supplied to the program.
 * @argv: An arry of pointers to the arguments.
 *
 * Return: Always true.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
