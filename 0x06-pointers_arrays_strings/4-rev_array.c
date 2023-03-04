#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: an array of integer
 * @n: number of integers to swap
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int len;

	for (len = n; len >= 0; len--)
	{
		printf("%d, ", a[len]);
	}
}
