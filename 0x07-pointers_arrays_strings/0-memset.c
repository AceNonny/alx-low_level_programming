#include <stdio.h>
/**
 *  * _memcpy - fills memory with another buffer.
 *   * @dest: the source string
 *    * @src: the string for filling
 *     * @n: the lenght of buffer
 *      * Return: new string.
 *       */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		*(dest + a) = *(src + a);
		a++;
	}
	return (dest);
}
