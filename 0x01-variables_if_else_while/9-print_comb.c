#include <stdio.h>
/**
 * Description: main - prints all possible combinations of single-digit numbers
 * Return: 0 if success
 */
int main(void)
{
	int number;

	while (number != 10)
	{
		putchar(48 + number);

		if (number != 9)
		{
			putchar(44);
			putchar(32);
		}

		number++;
	}
	putchar('\n');

	return (0);
}
