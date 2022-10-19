#include "main.h"
/**
 * print_sign - prints sign for a speciic number if greater or less than zero
 * @n: number to be checked
 * Return: returns 1 and + when number is greater than zero and 0 and - when number is lesser than 0
 **/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
