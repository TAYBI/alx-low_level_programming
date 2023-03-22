#include "main.h"
/*
 * _islower - checks if charater is loercase
 * return 1 if true 0 if false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
