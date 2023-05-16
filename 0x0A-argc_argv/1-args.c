#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: - count argument
 * @argv: - array of strings
 *
 * return: 0 always
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n",  argc - 1);
	return (0);
}
