#include "main.h"


/**
 * puts2 - To print one char out of 2 of a string.
 * @str: input the string.
 * Return: no return.
 */

void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (count % 2 == 0)
			_putchar(str[count]);
		count++;
	}
}
