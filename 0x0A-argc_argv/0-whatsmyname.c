#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: - count argument
 * @*argv[]: - array of strings
 * return: 0  exit(EXIT_SUCCESS OR EXIT_FAILURE)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("The name of the program is %s\n", argv[i]);
	}
	return (0);
}
