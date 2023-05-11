#include <stdio.h>

/**
 *factorial - to give the factorial of a given number.
 *@n: the inpust
 * Return: Always 0 on sucess or -1 on error.
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
