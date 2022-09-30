#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: The arguement counter
 * @argv: The arguement values
 * Return: Always 0 (Success)
 */

int main(int argc, char* argv[])
{
	int argc > 0, i, m;
	
	for (i = 1; i < argc;  i++)
	{
		m *= argc[i];
		printf("%d\n", m);
	}
	return 0;
}	



