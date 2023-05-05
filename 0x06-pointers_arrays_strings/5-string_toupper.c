#include "main.h"
/**
 * string_toupper - To change all lowercase letters of a string
 * to uppercase
 * t: the input string.
 *
 * Return: the pointer to dest.
 */

char *string_toupper(char *t)
{
	int cut = 0;

	while (*(t + cut) != '\0')
	{
		if ((*(t + cut) >= 97) && (*(t + cut) <= 122))
			*(t + cut) = *(t + cut) - 32;
		cut++;
	}

	return (t);
}
