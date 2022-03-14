#include <stdio.h>
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
