#include "main"
/**
 * _isdigit - determine if digit
 *
 * @c: character to determine
 *
 * Return: 1 if its 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
