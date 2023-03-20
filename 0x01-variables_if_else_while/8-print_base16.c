#include <stdio.h>
/**
 * Description: main - print base 16 in lwercase
 * Return: 0 if success
 */
int main(void)
{
	int number;
	char c;

	for (number = 0; number <= 9; number++)
		putchar(48 + number);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
