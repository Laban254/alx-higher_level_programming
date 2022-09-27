#include "main.h"

/**
 * _strstr -  a function that locates a substring.
 * @haystack: an input string to search in
 * @needle: an input string to locate into string haystack
 * Return:  a pointer to the beginning of the located substring,
 *  or NULL if the substring is not found.
 *
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int num1, num2;

	for (num1 = 0; *(haystack + num1) != '\0'; num1++)
	{
		for (num2 = 0; *(needle + num2) != '\0'; num2++)
		{
			if (*(haystack + num1 + num2) != *(needle + num2))
				break;
		}
		if (*(needle + num2) == '\0')
			return (&haystack[num1]);
	}
	return ('\0');
}
