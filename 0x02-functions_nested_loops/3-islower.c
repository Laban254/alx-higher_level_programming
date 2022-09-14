#include "main.h"

/**
 * _islower - entry point
 * Description: its chacks if character is lower case
 * @c: the interger value it receives
 * Return: if true 1 . if 0 false
 *
 */

int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
