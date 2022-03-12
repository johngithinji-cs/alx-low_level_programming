#include <stdio.h>
/**
 * main - program that prints all possible different combinations of 3 digits.
* Description: the program only uses putchar function  
* Return: 0
 */
int main(void)
{
	int x = 0;
	int first_d;
	int mid_d;
	int last_d;

	while (x <= 999)
	{
		first_d = (x / 100 + '0');
		mid_d = (x / 10 % 10 + '0');
		last_d = (x % 10 + '0');

		if ((first_d < mid_d) && (mid_d < last_d))
		{
			putchar(fast_d);
			putchar(mid_d);
			putchar(last_d);

			if (x != 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
		x++;
	}
putchar('\n');
return (0);
}
