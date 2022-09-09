#include <stdio.h>

/**
 * main - entry point
 * description  prints alphabets in lowercase
 * Return: o
 */

int main(void)
{
	int cha;

	for (cha = 'a'; cha <= 'z'; cha++)
	{
		putchar(cha);
	}
	putchar('\n');
	return (0);
}
