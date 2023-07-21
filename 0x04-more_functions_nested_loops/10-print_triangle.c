#include "main.h"

/**
 * print_triangle - It prints a triangle of squares
 * @size: The determinant of the squar triangle
 * Return: Always 0
*/

void print_triangle(int size)

{
	int l, b, h;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 0; l < size; l++)
		{
			for (b = size - l; b > 1; b--)
			{
				_putchar(32);
			}
			for (h = 0; h <= l; h++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
