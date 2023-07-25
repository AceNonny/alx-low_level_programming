#include "main.h"

/**
 * puts_half - it prints half of a string
 * @str: the string to be printed
 * Return: nothing
*/

void puts_half(char *str)

{
	int j = 0;
	int l;


	while (str[j] != '\0')
	{
		j++;
	}
	if (j % 2 == 1)
	{
		l = (j - 1) / 2;
		l += 1;
	}
	else
	{
		l = j / 2;
	}
	for (; l < j; l++)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}
