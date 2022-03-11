#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * Description: using the main function
 * this program uses putchar
 * Return: 0
 */
int main(void)
{
char l;
for (l = 'z' ; l >= 'a' ; l--)
{
	putchar(l);
}
putchar('\n');
return (0);
}
