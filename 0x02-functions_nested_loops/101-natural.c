#include <stdio.h>

/**
 * main - program that computes and prints the sum of all the multiples of 3 or
 *Return: Always 0
 */
int main(void)
{
	int x, sum;

	for (x = 0; x <= 1024; x++)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
			sum += x;
	}
	printf("%d\n", sum);
	return (0);
}
