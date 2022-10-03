#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: a pointer to new memory location containing both strings.
 */

char *str_concat(char *s1, char *s2)
{
	int end1, end2, i = 0;
	char *array;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";
	for (end1 = 0; end1 <= *s1; end1++)
	{
	}
	for (end2 = 0; end2 <= *s2; end2++)
	{
	}
	array = malloc(sizeof(char) * (end1 + end2 + 1));
	if (array == NULL)
		return (NULL);
	while (*s1)
	{
		array[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		array[i] = *s2;
		i++;
		s2++;
	}
	return (array);
}
