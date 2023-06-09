#include "main.h"
#include <stdio.h>

/**
* _strcpy - To check for copies the string pointed to by src,
* including the terminating null byte, to the
* buffer pointed to by dest.
* @dest: for destination.
* @src: for source.
* Return: the pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
