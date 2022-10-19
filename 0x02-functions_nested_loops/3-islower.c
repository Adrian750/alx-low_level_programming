#include "main.h"

/**
 * _islower - confirms the case of the character
 * @c:  character to be ouptputed
 * Return: always success (0)
 **/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
