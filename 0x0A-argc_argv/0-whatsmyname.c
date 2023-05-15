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

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}