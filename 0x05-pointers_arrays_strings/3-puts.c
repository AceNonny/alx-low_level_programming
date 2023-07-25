#include "main.h"

/**
 * _puts - it prints the string
 * @str: the string to be printed
 * Return: nthing
*/

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
