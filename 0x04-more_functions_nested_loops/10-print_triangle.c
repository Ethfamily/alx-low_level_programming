#include "main.h"
/**
 * print_triangle - print a triangle
 * @size: value for the triangle
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	int a, b, c, i;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			b = size - a;
			for (i = 1; i <= b; i++)
			{
				_putchar(32);
			}
			c = a;
			for (i = 1; i <= c; i++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
