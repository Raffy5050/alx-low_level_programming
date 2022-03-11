#include <stdio.h>
/**
*main - entry point
*Return: return zero
*/
int main(void)
{
int num = 0;
char alpha = 'a';
while (num < 10)
{
putchar(num + '0');
num++;
}
while (alpha <= 'f')
{
putchar(alpha);
alpha++;
}
putchar('\n');
return (0);
}
