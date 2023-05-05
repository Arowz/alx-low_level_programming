#include "main.h"
#include <stdio.h>
/**
 * infinite_add -  To add two numbers
 * @n1:the  number one.
 * @n2:the  number two.
 * @r:a  buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int ad1 = 0, ad2 = 0, op, bg, dr1, dr2, add = 0;

	while (*(n1 + ad1) != '\0')
		ad1++;
	while (*(n2 + ad2) != '\0')
		ad2++;
	if (ad1 >= ad2)
		bg = ad1;
	else
		bg = ad2;
	if (size_r <= bg + 1)
		return (0);
	r[bg + 1] = '\0';
	ad1--, ad2--, size_r--;
	dr1 = *(n1 + ad1) - 48, dr2 = *(n2 + ad2) - 48;
	while (bg >= 0)
	{
		op = dr1 + dr2 + add;
		if (op >= 10)
			add = op / 10;
		else
			add = 0;
		if (op > 0)
		*(r + bg) = (op % 10) + 48;
		else
			*(r + bg) = '0';
		if (ad1 > 0)
			ad1--, dr1 = *(n1 + ad1) - 48;
		else
			dr1 = 0;
		if (ad2 > 0)
			ad2--, dr2 = *(n2 + ad2) - 48;
		else
			dr2 = 0;
		bg--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
