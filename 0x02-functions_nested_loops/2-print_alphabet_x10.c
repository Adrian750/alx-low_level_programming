#include "main.h"

/**
 * print_alphabet_x10 - print the alphabets 10 times
 * Return - always success (0)
 */

void print_alphabet_x10(void)
{
	int i;
	char ch;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a'; ch <= 'z', ch++)
			_putchar(ch);
		putchar('\n')
	}
	return (0);
}
