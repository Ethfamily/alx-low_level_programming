#include <stdio.h>
/**
 *  * main - Program entry point
 *
 *  *
 *
 *  * Return: 0 on success. Error code otherwise
 */
int main(void)
{

	char a = 'a';
	int x = 0;

	while (x < 26)
	{
		putchar(a);
		a++;
		x++;
	}
	putchar('\n');
	return (0);
}
