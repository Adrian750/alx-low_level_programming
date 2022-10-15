#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *  main - Entry point
 *  Description: checks on the last digit of the assigned var
 *  Return: Always 0 (success)
 **/
int main(void)
{
	int n, m;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	m = n % 10;
<<<<<<< HEAD

=======
	
>>>>>>> 55e3a307307d319c4b1a7b9cfefbed0b9824ca3f
	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m < 6 && m != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, m);
	}
}
