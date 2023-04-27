#include "main.h"

/**
 * _isalpha- check alphabet.
 *@c: run through character
 * Return: 1 for alphabet or 0 for nothing else.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
