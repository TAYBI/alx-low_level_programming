#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * Description: main - print if number is negative or positive or zero
 * 
 * Return: 0 if success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if(n==0)
		printf("%d is zero", n);
	if(n<0)
                printf("%d is negative", n);
	else
                printf("%d is positive", n);
	return (0);
}
