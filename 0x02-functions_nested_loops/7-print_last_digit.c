#include "main.h"

/**
 * print_last_digit - check print_last_digit of a number
 *@m: the number to be checked
 * Return: value of the last digit
 */

int print_last_digit(int m)

{
	int ld;

	ld = m % 10;
	if (ld < 0)
	{
	ld = ld * -1;
	}
	_putchar(ld + '0');
	return (ld);
}
