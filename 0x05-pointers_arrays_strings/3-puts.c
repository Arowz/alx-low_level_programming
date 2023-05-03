#include "main.h"


/**
 * _puts - To print a string, then followed by a new line.
 * @str: input the string.
 * Return: no return.
 */

void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count++;
	}
}
