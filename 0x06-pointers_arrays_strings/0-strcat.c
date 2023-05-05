#include "main.h"
/**
 * _strcat - To concatenate two strings,
 *
 * @dest: The destination.
 * @src: The source.
 * Return: the pointer to dest.
 *
 */
char *_strcat(char *dest, char *src)
{
	int cut1  = 0, cut2 = 0;

	while (*(dest + cut1) != '\0')
	{
		cut1++;
	}

	while (cut2 >= 0)
	{
		*(dest + cut1) = *(src + cut2);
		if (*(src + cut2) == '\0')
			break;
		cut1++;
		cut2++;
	}
	return (dest);
}
