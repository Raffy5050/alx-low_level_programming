#include <stdio.h>
/**
*main - runs entry point
*description- a code that prints alphabet in reverse
*Return: return 0
*/
int main(void)
{
char alpha = 'z';
while (alpha >= 'a')
{
putchar(alpha);
alpha--;
}
putchar('\n');
return (0);
}
