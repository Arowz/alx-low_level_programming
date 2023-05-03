#include "main.h"


/**
 * swap_int-Swaps - check the values of 2 integers.
 * @a:First argument that will be swapped.
 * @b:second argument that will be swapped.
 *
 * Return:void.
 */


void swap_int(int *a, int *b)
{
	int p = *a;

	*a = *b;
	*b = p;
}
