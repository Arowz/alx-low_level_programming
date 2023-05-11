#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - check the code
 *@s: the input
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	int lenth = 0;

	if (*s)
	{
		lenth++;
		lenth +=  _strlen_recursion(s + 1);
	}
	return (lenth);
}
