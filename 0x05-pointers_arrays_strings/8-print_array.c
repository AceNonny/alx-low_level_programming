#include "main.h"
#include <stdio.h>

/**
 * print_array - it prints elements of an array of integers of n
 * @a: the array of integers
 * @n: the number of elements to be printed
 * Return: nothing
*/

void print_array(int *a, int n)

{
	int m;

	for (m = 0; m < n; m++)
	{
		printf("%d", a[m]);
		if (m != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
