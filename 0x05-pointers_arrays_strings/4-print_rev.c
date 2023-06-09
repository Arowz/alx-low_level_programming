#include "main.h"


/**
 * print_rev -To  print a string, in the reverse, followed by a new line.
 * @s: input the string.
 *
 * Return: no return.
 */

void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	for (count--; count >= 0; count--)
		_putchar(s[count]);
	_putchar('\n');
}
