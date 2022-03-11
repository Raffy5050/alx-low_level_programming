#include <stdio.h>
/**
 *main - entry point of program
 *Return: returns zero
 */
int main(void)
{
	char alpha = 'a';
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
