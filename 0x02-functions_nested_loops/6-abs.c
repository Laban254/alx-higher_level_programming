#includee "main.h"

/**
 * _abs -entry point
 * @n: n is an interger
 * Description: prints absolute value of an interger
 *
 * Return: int
 */

int _abs(int n)
{
	if (n > 0)
	{
		retunt(n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return(n);
	}
}
