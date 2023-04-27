#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: 'print alphabet in lower case'
 * Return: void
 */
void print_alphabet(void)
{
	char lc;

	lc = 97;

	while (lc <= 122)
	{
		_putchar(lc);
		lc++;
	}
	_putchar('\n');
}

