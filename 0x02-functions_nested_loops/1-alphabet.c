#include <stdio.h>
#include "holberton.h"
/**
*main-Entry point
*
*function print_alphabet:builtin function
*
*Return:Always 0 (Success)
*/
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	int i;
	for (i = 97; i < 123; i++)
	{
		char c = (char)i;

		putchar(c);
	}
	putchar('\n');
	return ;
}
