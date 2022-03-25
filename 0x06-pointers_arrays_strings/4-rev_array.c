#include "main.h"
/**
 * reverse_array - reverse
 * @a : pointer to int
 * @n : pointer to int
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int tmp;

	i = 0;
	j = n;

	while (i < j)
	{
		tmp = a[i];
		a[j] = a[i];
		a[j] = tmp;
	}
}
