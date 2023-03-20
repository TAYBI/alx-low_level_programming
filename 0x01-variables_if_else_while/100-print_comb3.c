#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: always 0
 */
int main(void)
{
	int number;
	int number2;

	for (number = 0; number < 9; number++)
	{
		number2 = number + 1;

		while (number2 <= 9)
		{
			if (number == number2)
				continue;
			putchar(48 + number);
			putchar(48 + number2);
			if (number == 8 && number2 == 9)
				break;
			putchar(',');
			putchar(' ');
			number2++;
		}

	}
	putchar('\n');

	return (0);
}
