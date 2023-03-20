#include <stdio.h>
/**
 * Description: main - print alphabet
 * Return: 0 if success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		printf("%c", c);
	printf("\n");

	return (0);
}
