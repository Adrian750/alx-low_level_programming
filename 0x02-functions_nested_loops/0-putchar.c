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
}
