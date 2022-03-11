#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - print if the number is postive, zero, or negative using if else
* Description: using the main function
* this program checks if a number is negative, positive or zero
* Return: 0
*/
int main(void)
{
int n;
int l;

srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;
if (l > 5)
{
	printf("Last digit of %d is %d and is greater than 5", n, l);
}
else if (l == 0)
{
	printf("Last digit of %d is %d and is 0", n, l);
}
else
{
	printf("Last digit of %d is %d and is less than 6 and not 0", n, l);
}
return (0);
}
