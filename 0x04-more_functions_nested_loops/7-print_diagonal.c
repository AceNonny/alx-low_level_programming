#include "main.h"

/**
 * print_diagonal - it prints lines diagonally
 * @n: the number of times a diagonal line will be printed
 * Return: Always 0
*/

void print_diagonal(int n)

{
	int a, d;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			for (d = 0; d < a; d++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
