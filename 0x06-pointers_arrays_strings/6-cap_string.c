#include "main.h"
/**
 * cap_string - To capitalizes all words of a string
 * @s: the input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *s)
{
	int cut = 0, i;
	int cap_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + cut) >= 97 && *(s + cut) <= 122)
		*(s + cut) = *(s + cut) - 32;
	cut++;
	while (*(s + cut) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + cut) == cap_words[i])
			{
				if ((*(s + (cut + 1)) >= 97) && (*(s + (cut + 1)) <= 122))
					*(s + (cut + 1)) = *(s + (cut + 1)) - 32;
				break;
			}
		}
		cut++;
	}
	return (s);
}
