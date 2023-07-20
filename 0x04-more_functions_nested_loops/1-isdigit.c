#include "main.h"

/**
 * _isdigit - Checks digit from 0 to 9
 * @c: The digit to be checked
 * Return: 1 for digit and 0 for anyother
*/

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
