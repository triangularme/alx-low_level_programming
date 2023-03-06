#include <stdlib.h>
#include <time.h>
#include <std.io>

/**
 * main- Entry
 *
 * Description: print value of status, zero, positive or negative
 *
 * Return: Always 0 success
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	/* my code*/

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		print("%d is negative\n", n);

	return (0);
}
