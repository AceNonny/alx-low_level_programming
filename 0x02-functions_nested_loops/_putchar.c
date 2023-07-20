/**
 * _putchar - it writes the character c to stdout
 * @c: The character to print
 *
 * Return: Success 1.
 * Error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
