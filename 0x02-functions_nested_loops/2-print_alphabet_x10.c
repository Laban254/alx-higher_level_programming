#include "main.h"

/**
 *print_alphabet_x10 - 10 times the alphabet
 *Description: uses _ptchar
 * Return: always 0
 *
 */

int print_alphabet_x10(void)
{
	int n;
	char i;

	for (n = 0; n < 10; n++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
