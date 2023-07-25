#include "main.h"
#include <stdio.h>

/**
 * print_rev - it prints the string in a reverse manner
 * @s: the string to be printed
 * Return: nothing
*/

void print_rev(char *s)

{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
