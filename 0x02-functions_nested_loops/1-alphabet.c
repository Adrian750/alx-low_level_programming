#include "main.h"

/**
 * print_alphabet - main function
 * Return: always success (0)
 *
 **/

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	putchar('\n');
	return (0);
}
