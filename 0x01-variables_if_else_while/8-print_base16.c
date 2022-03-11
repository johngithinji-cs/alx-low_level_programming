#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Description: using the main function
 * this program uses putchar
 * Return: 0
 */
int main(void)
{
char l;
for (l = '0' ; l <= '9' ; l++)
{
	putchar(l);
}
for (l = 'a' ; l  <= 'f' ; l++)
{
	putchar(l);
}
putchar('\n');
return (0);
}
