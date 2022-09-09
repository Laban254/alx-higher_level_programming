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
		 if (l != 'e' && l != 'q') 
			 putchar(l);
	}
	putchar('\n');
	return (0);
}
