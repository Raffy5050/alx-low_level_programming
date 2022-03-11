#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main -entry point of program
 *Return: zero
 */
int main(void)
{
	int n;
	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("% is negative\n", n);
	else
	 printf("%i is zero\n", n);
	return (0);
}
