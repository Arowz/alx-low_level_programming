#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print numbers in base 16'
 * Return: always 0
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	for (m = 97; m <= 102; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
