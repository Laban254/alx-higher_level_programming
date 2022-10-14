#include "main.h"

/**
 **_strcat - concatenates two strings.
 *@dest: input string
 *@src: input string
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char dest[40], src[15];
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		for (j = 0; src[j] != '\0'; j++)
		{
			dest[i] = src[j];
		}
	}
	return (dest);
}
