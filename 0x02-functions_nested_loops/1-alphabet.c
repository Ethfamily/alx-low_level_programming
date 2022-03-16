#include "main.h"
/**
*main-Entry point
*
*function print_alphabet:builtin function
*
*Return:Always 0 (Success)
*/
void print_alphabet(void)
{
	int i;
	for(i = 97; i < 123; i++)
	{
		char c = (char)i;
		_putchar(c);
	_putchar('\n');
	}
}
