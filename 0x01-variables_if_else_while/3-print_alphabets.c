#include <stdio.h>

/**
 *main - entry point
 *description - a to z  in upper case and lower case
 *Return: 0
 */

int main(void)
{
	int u, l;

	for (u = 'a'; u <= 'z'; u++)
	{
		putchar(u);
	}
	for (l = 'A'; l <= 'Z'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
