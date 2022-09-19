#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: an input string
 *Return: Nothing
 */

void print_rev(char *s)
{
	int len = 0, i = 0;
	char rev;

	while (s[len] != '\0')
		rev++;
	while (i < len--)
	{
		rev = s[i];
		s[i++] = s[len];
		s[len] = rev;
	}
}
