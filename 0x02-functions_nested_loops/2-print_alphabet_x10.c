#include "main.h"

/**
 * print_alphabet_x10 - 'print'.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char lc = 97;
	int i = 0;

	while (lc <= 122)
	{
		_putchar(lc);
		lc++;
	}
	while (i < 10)
	{
		_putchar(i);
		i++;
	}
}
