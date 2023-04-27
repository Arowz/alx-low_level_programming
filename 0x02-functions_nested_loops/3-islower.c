#include "main.h"

/**
 * _islower - check kowercase alphabets
 *@c: alphabet to be checked
 * Return: 1 for lowercase or 0 for nothing esle
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
