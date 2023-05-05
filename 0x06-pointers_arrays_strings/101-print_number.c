#include "main.h"
/**
 * print_number - To prints an integer.
 * @n: input the integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int m, a, cut;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}

	a = m;
	cut = 1;

	while (a > 9)
	{
		a /= 10;
		cut *= 10;
	}

	for (; cut >= 1; cut /= 10)
	{
		_putchar(((m / cut) % 10) + 48);
	}
}

