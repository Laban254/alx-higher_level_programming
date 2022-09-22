#include "main.h"

/**
 * *string_toupper -  changes all lowercase letters of a string to uppercase
 * @s: an input string
 * Return: char pointer to converted string
 *
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; c != '\0'; i++)
	{
		if (c >= 'a' && c < 'z')
		{
			c[i] = c[i] - 32;
		}
	}
	return (c);
}
