#include <stdio.h>

/**
 * main - prints program that prints the number of arguments passed into it
 * @argc: number of arguments supplied to the program.
 * @argv: An arry of pointers to the arguments.
 *
 * Return: Always true.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
