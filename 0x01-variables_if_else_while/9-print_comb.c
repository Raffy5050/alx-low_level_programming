#include <stdio.h>
/**
*main - entry point
*Return: returns zero
*/
int main(void)
{
int numb = 0;
while (numb < 10)
{
putchar(numb + '0');
if (numb < 9)
{
putchar(44);
putchar(32);
}
numb++;
}
putchar('\n');
return (0);
}
