#include <unistd.h>



/**
*_putchar - writes char to stdout
*@c: character to print
*Return: 1 as success
*/



int _putchar(char c)

{

	return (write(1, &c, 1));

}
