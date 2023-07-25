#include <stdio.h>

/**
 * _strlen - returns to the length on a string
 * @str: the string that gets its length
 * Return: the length of @str
*/
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
