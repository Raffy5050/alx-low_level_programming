#include "main.h"



/**
*more_numbers - print 0 to 14 ten times
*Return: 0 as success
*/



void more_numbers(void)

{

	char i;

	int counter;



	for (counter = 1; counter <= 10; counter++)

	{

		for (i = 0; i <= 14; i++)

		{

			if (i / 10 > 0)

				_putchar((i / 10) + '0');

			_putchar((i % 10) + '0');

		}

		_putchar('\n');

	}

}
