#include "main.h"

/**
 * _strncpy - To make copies of a string
 * @dest: The destination.
 * @src: The source.
 * @n: The number of bytes from src.
 * Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
