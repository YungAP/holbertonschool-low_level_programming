#include "holberton.h"


/**
 * reverse_array - reverses content of an array
 * @a: arrray operand
 * @n:  number of elements
 * Return: (0)
 */

void reverse_array(int *a, int n)
{
	int i;
	int end;
	int tmp;

	i = 0;
	end = n - 1;

	for (i = 0 ; i < n ; i++)
		;
	for (i = 0 ; i < n / 2 ; i++)
	{
		tmp = a[i];
		a[i] = a[end];
		a[end] = tmp;
		end--;

	}
	for (i = 0 ; i < n ; i++)
		;
}
