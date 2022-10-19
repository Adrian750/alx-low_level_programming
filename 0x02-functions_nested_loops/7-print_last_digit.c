#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The value of digits t be checked
 * Return: returns a value
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (n < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');
	return (0);
}
