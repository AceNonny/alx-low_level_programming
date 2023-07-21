#include "main.h"

/**
 * print_square - it prints squares n number of times
 * @size: the number of times that determines the line to be printed
 * Return: Always 0
*/

void print_square(int size)

{
	int a, d;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (d = 0; d < size; d++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
