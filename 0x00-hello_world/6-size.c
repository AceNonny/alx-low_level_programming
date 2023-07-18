#include <stdio.h>
/**
 * main -it prints the size of the types of data
 *
 * Return: alwasys (0)
 *
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char: %lu\n", sizeof(a));
	printf("size of int: %lu\n", sizeof(b));
	printf("size of long int: %lu\n", sizeof(c));
	printf("size of long long int: %lu\n", sizeof(d));
	printf("size of float: %lu\n", sizeof(e));
	return (0);
}
