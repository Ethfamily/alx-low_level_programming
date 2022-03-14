#include <stdio.h>
/**
 *  main - program entry point
 *
 *  Return: 0 on success. Error code otherwise
*/
int main(void)
{
	char a = 'a';
	char A = 'A';
	int x = 0;

	while (x < 52)
	{
		if (x < 26)
		{
			putchar(a);
			a++;
		} else
		{
			putchar(A);
			A++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
