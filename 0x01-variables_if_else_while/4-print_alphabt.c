#include <stdio.h>
/**
 *  main - program entry point
 *
 *  Return: 0 on success
 */
int main(void)
{
	char ch = 'a';
		while (ch <= 'z')
		{
			if (ch != 'e' && ch != 'q')
			{
			putchar(ch);
			}
			ch++;
		}
		putchar('\n');

	return (0);
}
