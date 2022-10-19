<<<<<<< HEAD
#include <unistd.h>
#include "main.h"

/**
 * _putchar - outputs character to stdout
 * @c: character to be printed
 *
 * Return: Always success 1
 **/

int _putchar(char c)
{
	return (write(1, &c, 1));
=======
#include "main.h"
/**
 *  main - executed first; prints putchar
 * return - always success (0)
 **/
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
>>>>>>> 42ad09d266dbe54f9319cd9c5eb7a132b9ed753f
}
