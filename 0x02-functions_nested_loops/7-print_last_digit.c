#include "main.h"
/**
 * print_last_digit - function that prints the last digit
 * @n: takes ln an integer
 * Return: returns output
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (n < 0)
		ld = ld * -1;

	_putchar(ld + '0');
	return (ld);
}
