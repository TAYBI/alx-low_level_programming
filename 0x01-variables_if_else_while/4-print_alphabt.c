#include <stdio.h>
/**
 * Description: main - print alphabet
 * Return: 0 if success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		if (c == 'q' || c == 'e')
			continue;
		else
			putchar(c);
	putchar('\n');

	return (0);
}
