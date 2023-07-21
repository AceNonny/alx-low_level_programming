#include "main.h"

/**
 * print_line - it prints a striaght line when is is 0 or less than 0
 * @n: the number of ines tha should be drawn
 * Return: Always 0
*/

void print_line(int n)

{
	int e;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (e = 0; e < n; e++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}

