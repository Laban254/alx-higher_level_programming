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
	int **array, i, j;
	int len = width * height;

	if (len <= 0)
		return (NULL);
	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	return (array);
}
