#include "main.h"

/**
 * print_numbers - It prints numbers from 0 to 9
 * Return: The numbers from 0 to 9
*/

void print_numbers(void)
{

	int c;

	for (c >= 48; c <= 57; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}
