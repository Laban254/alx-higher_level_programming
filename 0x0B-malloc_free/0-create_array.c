#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars, and initializes it
 * with a specific char.
 * @size: size input
 * @c: char
 * Return: char pointer to malloc created memory address or NULL if error
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ch;

	ch = malloc(size * sizeof(char));
	if (size == 0  || ch == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ch[i] = c;
	return (ch);
}
