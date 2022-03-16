_putchar function
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
