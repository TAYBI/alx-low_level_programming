#include <stdio.h>
/**
 * Description: main - print the size of variable
 *
 * Return: 0 if success.
 */
int main(void)
{
	char _char;
	int _int;
	long int _lint;
	long long int _llint;
	float _float;

	printf("Size of a char: %lu byte(s)\n", sizeof(_char));
	printf("Size of an int: %lu byte(s)\n", sizeof(_int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(_lint));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(_llint));
	printf("Size of a float: %lu byte(s)\n", sizeof(_float));
	return (0);
}
