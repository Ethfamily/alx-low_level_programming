#include <stdio.h>
#include "main.h"
/**
*main-Entry point
*
*function print_alphabet:builtin function
*
*Return:lways 0 (Success)
*/
char print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}
char print_alphabet(void)
{
	for (int i = 97; i < 123; i++)
	{
		char c = (char)i;

		putchar(c);
	}
	return (0);
}
