#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int b = 0;
	int dest_len = 0;

	while (dest[b++])
		dest_len++;
	for (b = 0; src[b]; b++)
		dest[dest_len++] = src[b];
	return (dest);
}
