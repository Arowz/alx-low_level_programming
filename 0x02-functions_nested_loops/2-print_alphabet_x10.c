#include "main.h"

/**
 * print_alphabet_x10 - 'print'.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char lc;
	int i;

	i = 0;

	while (i < 10)
	{
	for (lc = 97; lc <= 122; lc++)
	{
		_putchar(lc);
	}
	_putchar('\n');
	i++;
	}
}
