#include "main.h"
/**
 * more_numbers - print a serie of numbers
 *
 * Return: nothing i.e void
 */
void more_numbers(void)
{
	int num, count, i, j;

	for (count = 0; count < 10; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			i = num;

			if (num > 9)
			{
				i = num / 10;
				j = num % 10;
			}
			_putchar(i + '0');
			if (num > 9)
				_putchar(j + '0');
		}
		_putchar('\n');

	}
}
