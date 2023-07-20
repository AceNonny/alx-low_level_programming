#include "main.h"

/**
 * _isupper - Determines if a letter is in uppercase
 * i
 * @c: the number to be determined
 * Return: 1 for uppercase leteer or 0 for anyother case
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
