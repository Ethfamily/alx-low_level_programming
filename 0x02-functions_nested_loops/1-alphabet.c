#include "main.h"
/**
 * print_alphabet - prints alphapbet in lowercase
 *
 * Return:Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		char c = (char)i;

		_putchar(c);
	}
	_putchar('\n');
}
