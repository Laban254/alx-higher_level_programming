#include  "main.h"

/**
 * rev_string - function that reverses a string.
 *
 * @s: input to reverse
 * Return: string and in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int hcounter = 0;
	int i;

	while (s[hcounter] != '\0')
		hcounter++;
	for (i = 0; i < hcounter; i++)
	{
		hcounter--;
		rev = s[i];
		s[i] = s[hcounter];
		s[hcounter] = rev;
	}
}
