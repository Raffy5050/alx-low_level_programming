#include <stdio.h>
/**
*main - entry point function
*Return: zero
*/
int main(void)
{
int num = 0;
while (num < 10)
{
putchar(num + '0');
num++;
}
putchar('\n');
return (0);
}
