#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * hcounter is to first count to end, b is to count back
 * @s: an input string
 *Return: Nothing
 */

void print_rev(char *s)
{
	int hcounter = 0;
	int i, b;

	for (i = 0; s[i] != '\0'; i++)
	{
		hcounter++;
	}
	for (b = (hcounter - 1); b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
