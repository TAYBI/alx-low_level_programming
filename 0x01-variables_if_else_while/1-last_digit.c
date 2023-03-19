#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * Description: main-print the last degit of a number
 *
 * Return succes 0 if succes
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_degit = n % 10;

	if (last_degit > 5)
		printf("Last digit of %d is %d and is greater than 5", n, last_degit);
	else if ((last_degit < 6) && (last_degit != 0))

	return (0);
}
