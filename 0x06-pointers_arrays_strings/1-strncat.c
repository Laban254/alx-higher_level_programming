#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 *@dest: an input string
 *@src: an input string
 *@n: an input integer
 *Return: A pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	for (j = 0; src[j] != '\0' && n > 0; j++)
	{
		dest[i] = src[j];
		n--;
		i++;
	}
	return (dest);
}
