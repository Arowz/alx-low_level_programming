#include "main.h"
#include <stdio.h>
/**
 * print_buffer - To print a buffer
 *
 * @b: the buffer.
 * @size: the size of buffer.
 * Return: no return.
 */
void print_buffer(char *b, int size)
{
	int g, h, l;

	if (size <= 0)
		printf("\n");
	else
	{
		for (g = 0; g < size; g += 10)
		{
			printf("%.8x:", g);
			for (h = g; h < g + 10; h++)
			{
				if (h % 2 == 0)
					printf(" ");
				if (h < size)
					printf("%.2x", *(b + h));
				else
					printf("  ");
			}
			printf(" ");
			for (l = g; l < g + 10; l++)
			{
				if (l >= size)
					break;
				if (*(b + l) < 32 || *(b + l) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + l));
			}
			printf("\n");
		}
	}
}
