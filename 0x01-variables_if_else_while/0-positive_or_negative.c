#include <stdlib.h>
#include <time.h>

/**
 * main -n determines if value in main
 * if > 0 ouput positive
 * if < 0 otput negative
 * return 0
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
	{
		printf("%d is pisitive", n);
	}
	else if (n==0)
	{
		printf("%d is zero", n);
	}
	elsif if (n<0)
	{
		printf("%d is negative", n);
	}
	return (0);
}
