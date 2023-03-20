#include <stdio.h>
/**
 * Description: main - print number
 * Return: 0 if success
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
		putchar(48 + number);
	putchar('\n');

	return (0);
}
