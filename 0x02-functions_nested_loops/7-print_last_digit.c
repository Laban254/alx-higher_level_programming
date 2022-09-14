#include "main.h"

/**
 * print_last_digit - it prints the last digit
 * @n: n is an interger
 * Description: It prints the last digit of a number
 * Return: integer
 */

int print_last_digit(int n)
{
	int k = n % 10;

	if (n < 0)
	{
		k = k * -1;
	}
	_putchar(k + '0');
	return (k);
}
