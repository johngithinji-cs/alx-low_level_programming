#include <stdio.h>
/**
 * main - prints the alphabet in lowercase except q and e
 * Description: using the main function
 * this program uses putchar
 * Return: 0
 */
int main(void)
{
char l;
for (l = 'a' ; l <= 'z' ; l++)
{
	if (l != 'q' && l != 'e')
		{
		putchar(l);
}
}

putchar('\n');
return (0);
}
