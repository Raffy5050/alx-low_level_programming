#include "main.h"



/**
*_isdigit - checks for a digit
*@c: parameter to check
*Return: 0 as success
*/



int _isdigit(int c)

{

	if (c >= '0' && c <= '9')

		return (1);

	return (0);

}
