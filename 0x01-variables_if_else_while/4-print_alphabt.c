#include <stdio.h>

/**
 *main - entry level
 *description do not print q e
 *return: 0
 */

int main(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	if (l != 'e' && l != 'q')
	putchar('\n');
	return (0);
}
