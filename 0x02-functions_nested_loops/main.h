void print_alphabet(void)
{
	for (int i = 97; i < 123; i++)
	{
		char c = (char)i;
		putchar(c);
	}
	putchar('\n');
	return ;
}