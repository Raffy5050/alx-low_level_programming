#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
*main - function is the entry point that returns int
*Takes a number and prints it if its positive, negative or zero
*Return: return 0 after being called as a success
*/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is zero\n", n);
return (0);
}
