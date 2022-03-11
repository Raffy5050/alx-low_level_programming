#include <stdio.h>
/**
*main - entry point
*Return: zero
*/
int main(void)
{
char alpha = 'a';
while (alpha <= 'z')
{
if (alpha != 'q' && alpha != 'e')
putchar(alpha);
alpha++;
}
putchar('\n');
return (0);
}
