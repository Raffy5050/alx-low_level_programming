#include "main.h"



/**
*_isupper - checks for uppercase characters
*@c:parameter to check
*Return: 0 as success
*/



int _isupper(int c)

{

	if (c >= 'A' && c <= 'Z')

		return (1);

	return (0);

}
