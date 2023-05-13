#include "main.h"

/**
* _strlen- to find the length of a string.
* @s: To check String pointer to the string whose length is to be found.
* Return: return the length of the string.
*/


int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
