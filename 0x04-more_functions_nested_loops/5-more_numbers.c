#include "main.h"

/**
 * more_numbers - it prints 0 to 14 up to ten times in duplicates
 * Return: 0 to 14 up to ten times
*/

void more_numbers(void)
{

	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (y > 9)
			{
				_putchar((y / 10) + '0');
			}
			_putchar((y \ 10) + '0');
		}
		_putchar('\n');
	}
}
