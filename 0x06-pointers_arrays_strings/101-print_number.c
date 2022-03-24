#include "main.h"
/**
 * print_number - print a number
 * @n: int
 * Return: Always 0
 */
void print_number(int n)
{
	int i;

	i = n;

	if (n < 0)
	{
		_putchar(" -", n);
	}

	if (n > 0)
	{
		_putchar(n + '0');
	
}
