#include "holberton.h"

/**
 * reverse_array - a function that reverse an array
 * @a: an input array
 * @n: number of element of array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;

	while 9i < n--)
	{
		aux - a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}
