#include <stdio.h>

/**
*main - print 1 to 100,
*multiples of 3 with Fizz,
*multiples of 5 with Buzz
*and multiple of both 3 and 5 with FizzBuzz
*Return: 0 as success
*/



int main(void)

{

	int i;



	i = 1;

	printf("%d", i);



	for (i = 2; i <= 100; i++)

	{

		if ((i % 3 == 0} && (i % 5 == 0))

			printf(" FizzBuzz");

		else if (i % 3 == 0)

			printf(" Fizz");

		else if (i % 5 == 0)

			printf(" Buzz");

		else

			printf(" %d", i);

	}

	printf('\n');

	return (0);
}


