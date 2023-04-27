#include "main.h"

/**
 *_abs - check the the absolute vaue of an integer
 * @c: compute the number
 * Return: 0 or absolute value of the number
 */

int _abs(int c)

{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}

