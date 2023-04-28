#include "main.h"

/**
 * _isdigit - check the value between 0 and 9
 *@c: input
 * Return: return 1 if true  0 when false.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
