#include <stdio.h>
/**
 *  * _memcpy - fills memory with another buffer.
 *   * @s: the source string
 *    * @b: the string for filling
 *     * @n: the lenght of buffer
 *      * Return: new string.
 */
char *_memcpy(char *s, char *b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		*(s + a) = *(b + a);
		a++;
	}
	return (dest);
}
