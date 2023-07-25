#include "main.h"

/**
 * _strcpy - it copies a string
 * @dest: the destination value
 * @src: the source value
 * Return: take the pointer to the destination
*/

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a++] = '\0';
	return (dest);
}
